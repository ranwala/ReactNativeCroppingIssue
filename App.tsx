/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 */

import React from 'react';

import HomeScreen from './Screens/HomeScreen';
import ScreenA from './Screens/ScreenA';
import ScreenB from './Screens/ScreenB';
import ScreenC from './Screens/ScreenC';

import { NavigationContainer } from '@react-navigation/native';
import { createNativeStackNavigator } from '@react-navigation/native-stack';
import ScanbotSDK, { InitializationOptions } from 'react-native-scanbot-sdk';

const Stack = createNativeStackNavigator();

const initScanbotSdk = async () => {
  const options: InitializationOptions = {
    licenseKey: "",
    loggingEnabled: true, // Consider switching logging OFF in production builds for security and performance reasons!
    // storageImageFormat: SDKUtils.IMAGE_FILE_FORMAT,
    //storageBaseDirectory: this.getCustomStoragePath(), // Optional custom storage path. See comments below!
    documentDetectorMode: 'ML_BASED',
  };

  try {
    const result = await ScanbotSDK.initializeSDK(options);
    console.log(result);
  } catch (e: any) {
    console.error('Error initializing Scanbot SDK:', e.message);
  }
}

function App(): React.JSX.Element {

  initScanbotSdk();

  return (
    <NavigationContainer>
      <Stack.Navigator>
        <Stack.Group>
          <Stack.Screen name="Home" component={HomeScreen} />
        </Stack.Group>
        <Stack.Group screenOptions={{ presentation: 'modal' }}>
          <Stack.Screen name="ScreenA" component={ScreenA} />
          <Stack.Screen name="ScreenB" component={ScreenB} />
          <Stack.Screen name="ScreenC" component={ScreenC} />
        </Stack.Group>
      </Stack.Navigator>
    </NavigationContainer>
  );
}

export default App;
