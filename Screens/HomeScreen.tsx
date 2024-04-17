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
    Header,
} from 'react-native/Libraries/NewAppScreen';

const HomeScreen = ({ navigation }: { navigation: any }) => {
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
                <Header />
                <View
                    style={{
                        backgroundColor: isDarkMode ? Colors.black : Colors.white,
                    }}>

                    <Button
                        title="Go to Screen A"
                        onPress={() =>
                            navigation.navigate('ScreenA', { name: 'Screen A' })
                        }
                    />

                    <Button
                        title="Go to Screen B"
                        onPress={() =>
                            navigation.navigate('ScreenB')
                        }
                    />

                </View>
            </ScrollView>
        </SafeAreaView>
    );
}

export default HomeScreen;