//
//  SBSDKMedicalCertificateRecognizerCheckboxResult.h
//  ScanbotSDKBeta
//
//  Created by Andrew Petrus on 14.11.17.
//  Copyright © 2017 doo GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Type classifiers for checkboxes recognized on medical certificates.
 */
typedef NS_ENUM(NSUInteger, SBSDKMedicalCertificateRecognizerCheckboxType) {
    /** The initial certificate checkbox. */
    SBSDKMedicalCertificateRecognizerCheckboxTypeInitialCertificate,
    
    /** The renewed certificate checkbox. */
    SBSDKMedicalCertificateRecognizerCheckboxTypeRenewedCertificate,
  
    /** The work accident checkbox. */
    SBSDKMedicalCertificateRecognizerCheckboxTypeWorkAccident,
    
    /** The accident insurance doctor checkbox. */
    SBSDKMedicalCertificateRecognizerCheckboxTypeAssignedToAccidentInsuranceDoctor,
    
    /** The accident checkbox. */
    SBSDKMedicalCertificateRecognizerCheckboxTypeAccidentYes,
    
    /** The requires care checkbox. */
    SBSDKMedicalCertificateRecognizerCheckboxTypeRequiresCareYes,
    
    /** The insured paycase checkbox. */
    SBSDKMedicalCertificateRecognizerCheckboxTypeInsuredPayCase,
    
    /** The final certificate checkbox. */
    SBSDKMedicalCertificateRecognizerCheckboxTypeFinalCertificate,
    
    /** The care no checkbox. */
    SBSDKMedicalCertificateRecognizerCheckboxTypeCareNo,
    
    /** The accident no checkbox. */
    SBSDKMedicalCertificateRecognizerCheckboxTypeAccidentNo,

    /** The other accident checkbox. */
    SBSDKMedicalCertificateRecognizerCheckboxTypeOtherAccident,

    /** The checkbox could not be classified. */
    SBSDKMedicalCertificateRecognizerCheckboxTypeUndefined,
    
    /** The entitlment to continued payment checkbox. */
    SBSDKMedicalCertificateRecognizerCheckboxTypeEntitlementToContinuedPaymentYes,
    
    /** The entitlment to continued payment no checkbox. */
    SBSDKMedicalCertificateRecognizerCheckboxTypeEntitlementToContinuedPaymentNo,
    
    /** The sick pay was claimed no checkbox. */
    SBSDKMedicalCertificateRecognizerCheckboxTypeSickPayWasClaimedNo,
    
    /** The sick pay was claimed checkbox. */
    SBSDKMedicalCertificateRecognizerCheckboxTypeSickPayWasClaimedYes,
    
    /** The single parent no checkbox. */
    SBSDKMedicalCertificateRecognizerCheckboxTypeSingleParentNo,
    
    /** The single parent checkbox. */
    SBSDKMedicalCertificateRecognizerCheckboxTypeSingleParentYes
};

/**
 * Contains information about recognized medical certificate checkbox.
 */
@interface SBSDKMedicalCertificateRecognizerCheckboxResult : NSObject

/** The type of the checkbox. */
@property (nonatomic) SBSDKMedicalCertificateRecognizerCheckboxType type;

/** Whether the checkbox is checked or not. */
@property (nonatomic) BOOL isChecked;

/** The confidence value of the recognition. */
@property (nonatomic) double confidenceValue;

@end
