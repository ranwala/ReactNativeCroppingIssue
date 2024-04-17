import React from 'react';
import {
    SafeAreaView,
    ScrollView,
    StatusBar,
    useColorScheme,
    View,
    Button,
} from 'react-native';

import {
    Colors,
} from 'react-native/Libraries/NewAppScreen';

function ScreenB({ navigation }: { navigation: any }): React.JSX.Element {
    const isDarkMode = useColorScheme() === 'dark';

    const backgroundStyle = {
        backgroundColor: isDarkMode ? Colors.darker : Colors.lighter,
    };

    return (
        <SafeAreaView style={backgroundStyle}>
            <StatusBar
                barStyle={isDarkMode ? 'light-content' : 'dark-content'}
                backgroundColor={backgroundStyle.backgroundColor}
            />
            <ScrollView
                contentInsetAdjustmentBehavior="automatic"
                style={backgroundStyle}>
                <View
                    style={{
                        backgroundColor: isDarkMode ? Colors.black : Colors.white,
                    }}>

                    <Button
                        title="Go Back"
                        onPress={() =>
                            navigation.goBack()
                        }
                    />

                    <Button
                        title="Go to Screen C"
                        onPress={() =>
                            navigation.navigate('ScreenC')
                        }
                    />

                </View>
            </ScrollView>
        </SafeAreaView>
    );
}

export default ScreenB;