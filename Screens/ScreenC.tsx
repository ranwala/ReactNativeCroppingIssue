import React from 'react';
import {
    SafeAreaView,
    ScrollView,
    StatusBar,
    useColorScheme,
    View,
    Button,
} from 'react-native';
import ScanbotSDK, { DocumentScannerConfiguration, Page } from 'react-native-scanbot-sdk';

import {
    Colors,
} from 'react-native/Libraries/NewAppScreen';

const startDocumentScanner = async () => {
    const config: DocumentScannerConfiguration = {
        // Customize colors, text resources, etc..
        polygonColor: '#00ffff',
        bottomBarBackgroundColor: Colors.SCANBOT_RED,
        topBarBackgroundColor: Colors.SCANBOT_RED,
        cameraBackgroundColor: Colors.SCANBOT_RED,
        orientationLockMode: 'PORTRAIT',
        pageCounterButtonTitle: '%d Page(s)',
        multiPageEnabled: false,
        ignoreBadAspectRatio: true,
        // documentImageSizeLimit: { width: 2000, height: 3000 },
        // maxNumberOfPages: 3,
        // See further config properties ...
    };

    const result = await ScanbotSDK.UI.startDocumentScanner(config);
    if (result.status === 'OK') {
        //console.log(JSON.stringify(result.pages));
        cropButtonPress(result.pages[0]);
    }
}

const cropButtonPress = async (pageSelected: Page) => {

    const result = await ScanbotSDK.UI.startCroppingScreen(
        pageSelected as Page,
        {
            doneButtonTitle: 'Apply',
            topBarBackgroundColor: "#a52a2a",
            bottomBarBackgroundColor: "#a52a2a",
            orientationLockMode: 'NONE',
            swapTopBottomButtons: false,
            // See further config properties ...
        },
    );

    if (result.status === 'OK') {
        if (result.page) {
            console.log('This is working...');
        }
    }
}

function ScreenC({ navigation }: { navigation: any }): React.JSX.Element {
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
                        title="Scan Document"
                        onPress={() =>
                            startDocumentScanner()
                        }
                    />

                </View>
            </ScrollView>
        </SafeAreaView>
    );
}

export default ScreenC;