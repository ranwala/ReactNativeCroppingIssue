#if 0
#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.8.1 (swiftlang-5.8.0.124.5 clang-1403.0.22.11.100)
#ifndef SCANBOTSDKNATIVEWRAPPER_SWIFT_H
#define SCANBOTSDKNATIVEWRAPPER_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import ScanbotSDK;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ScanbotSDKNativeWrapper",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

SWIFT_CLASS("_TtC23ScanbotSDKNativeWrapper9JSONUtils")
@interface JSONUtils : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSString;

SWIFT_CLASS("_TtC23ScanbotSDKNativeWrapper17SBNWConfiguration")
@interface SBNWConfiguration : NSObject
@property (nonatomic, copy) NSString * _Nonnull licenseKey;
@property (nonatomic) BOOL loggingEnabled;
@property (nonatomic) NSInteger storageImageQuality;
@property (nonatomic) SBSDKImageFileFormat storageImageFormat;
@property (nonatomic, copy) NSString * _Nonnull storageBaseDirectory;
@property (nonatomic) SBSDKDocumentDetectorMode documentDetectorMode;
@property (nonatomic, copy) NSString * _Nonnull fileEncryptionPassword;
@property (nonatomic) SBSDKAESEncrypterMode fileEncryptionMode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC23ScanbotSDKNativeWrapper30SBNWDiagnosticsDefaultRegistry")
@interface SBNWDiagnosticsDefaultRegistry : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP23ScanbotSDKNativeWrapper10SBNWLogger_")
@protocol SBNWLogger
- (void)logInfo:(NSString * _Nonnull)msg;
- (void)logDebug:(NSString * _Nonnull)msg;
- (void)logError:(NSString * _Nonnull)msg;
@end


SWIFT_CLASS("_TtC23ScanbotSDKNativeWrapper14SBNWOperations")
@interface SBNWOperations : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol SBNWProxyDelegate;

@interface SBNWOperations (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
+ (void)extractImagesFromPdfWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
+ (void)extractPagesFromPdfWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
@end


@interface SBNWOperations (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
/// Applies the given filter to the image located in the given <code>imageFileUri</code>
/// \param imageFileUri The Image File URI
///
/// \param filter The name of the filter to apply
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)applyImageFilterWithImageFileUri:(NSString * _Nonnull)imageFileUri filter:(NSString * _Nonnull)filter delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
/// Applies the given image filter to the given page
/// \param pageDict The dictionary representation of the page
///
/// \param filter The name of the filter to apply to the page
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)applyImageFilterOnPageWithPageDict:(NSDictionary<NSString *, id> * _Nonnull)pageDict filter:(NSString * _Nonnull)filter delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
/// Generates and returns a preview image, in which the given filter is applied to the given page
/// \param pageDict The dictionary representation of the page
///
/// \param filter The name of the filter to apply on the page
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)getFilteredDocumentPreviewUriWithPageDict:(NSDictionary<NSString *, id> * _Nonnull)pageDict filter:(NSString * _Nonnull)filter delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
@end


@interface SBNWOperations (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
/// Creates a page from the given image
/// \param imageFileUri The image file URI
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)createPageWithImageFileUri:(NSString * _Nonnull)imageFileUri delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
/// Creates a page from the given image
/// \param imageFileUri The image file URI
///
+ (NSDictionary<NSString *, id> * _Nullable)createPageWithImageFileUri:(NSString * _Nonnull)imageFileUri SWIFT_WARN_UNUSED_RESULT;
/// Removes the given page from the SDK Page File Storage
/// WARNING: This used to return nil in case of success; now it returns an empty dictionary instead.
/// \param pageDict The dictionary representation of the page
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)removePageWithPageDict:(NSDictionary<NSString *, id> * _Nonnull)pageDict delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
/// Rotates the given page clockwise, for the specified number of times
/// \param pageDict The dictionary representation of the page
///
/// \param times The number of times the page should be rotated clockwise
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)rotatePageWithPageDict:(NSDictionary<NSString *, id> * _Nonnull)pageDict times:(NSInteger)times delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
/// Updates the image in the page document, using the given image file URI
/// WARNING: This used to return just the uri itself. Now this URI is encapsulated in the
/// field “uri” of the returned dictionary.
/// \param pageDict The dictionary representation of the page
///
/// \param imageFileUri The image file URI
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)setDocumentImageWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
@end

@class NSData;
@class NSURL;
@class SBSDKIndexedImageStorage;

@interface SBNWOperations (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
/// Rotates the image located at the given URI by the given degrees
/// \param imageFileUri The image file URI
///
/// \param degrees The desired rotation degrees
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)rotateImageWithImageFileUri:(NSString * _Nonnull)imageFileUri degrees:(double)degrees quality:(float)quality delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
/// Returns an estimation of how blurred the given image is
/// \param args A dictionary containing ‘imageFileUri’ with the URI of the image
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)estimateBlurWithArgs:(NSDictionary<NSString *, id> * _Nonnull)args delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
+ (NSData * _Nullable)getImageDataFromUriWithImageFileUri:(NSString * _Nonnull)imageFileUri SWIFT_WARN_UNUSED_RESULT;
/// Returns the Base64 representation of the image located in the given URI.
/// If the image is encrypted, it will be automatically decrypted.
/// \param imageFileUri The image file URI
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)getImageDataWithImageFileUri:(NSString * _Nonnull)imageFileUri delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
/// Returns a new Encrypted Temporary Image Storage for the image located in the given URL(s)
/// \param imageFileURLs An array containing an URL for each image to store
///
///
/// returns:
/// The new encrypted temporary image storage (nil if the operation failed)
+ (SBSDKIndexedImageStorage * _Nullable)tempImageStorageFromFilesListWithImageFileURLs:(NSArray<NSURL *> * _Nonnull)imageFileURLs SWIFT_WARN_UNUSED_RESULT;
/// Refresh the given pages so that the imageUris are re-generated, if the images have changed
/// \param configuration the configuration dictionary with required ‘pages’ key
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)refreshImageUrisWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
@end


@interface SBNWOperations (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
/// Writes a TIFF file using the given images
/// \param configuration The configuration dictionary (‘imageFileUris’ is required)
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)writeTIFFWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
/// Creates a PDF from the given images
/// \param imageFileUris The image files URI(s)
///
/// \param pageSize The PDF page size
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)createPDFWithImageFileUris:(NSArray<NSString *> * _Nonnull)imageFileUris pageSize:(NSString * _Nonnull)pageSize delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
/// Performs a clean-up of all files in the the plugin storage
/// WARNING: This used to return nil on SUCCESS, now it returns an empty dictionary instead.
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)cleanupWithDelegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
@end


@interface SBNWOperations (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
/// Detect the document in the given image
/// \param configuration The JSON configuration object (‘imageFileUri’ is required)
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)recognizeCheckOnImageWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
/// Detect the document in the given image
/// \param configuration The JSON configuration object (‘imageFileUri’ is required’)
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)detectDocumentWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
/// Peforms OCR on the given images, using the given configuration
/// \param imageFileUris The image files URIs
///
/// \param languages The languages to use for the OCR recognition
///
/// \param options The desired recognition options dictionary
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)performOCRWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
/// Recognizes Machine-Zone-Readable data in the given image
/// \param imageFileUri the image file URI
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)recognizeMrzWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
/// Detects barcodes on the given image
/// \param configuration the JSON configuration for the Barcode Scanner
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)detectBarcodesOnImageWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
/// Detects barcodes on the given images
/// \param configuration the JSON configuration for the Barcode Scanner
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)detectBarcodesOnImagesWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
/// Detects the document in the given page
/// \param pageDict The dictionary representation of the page
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)detectDocumentOnPageWithPageDict:(NSDictionary<NSString *, id> * _Nonnull)pageDict delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
@end


@interface SBNWOperations (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
/// Initializes the SDK with the given option parameters
/// \param options A dictionary containing the desired options
///
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)initializeSDKWithOptions:(NSDictionary<NSString *, id> * _Nonnull)options delegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
/// Returns information about the SDK License
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)getLicenseInfoWithDelegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
/// Returns information about the OCR configuration (installed languages and URL path of the data files)
/// \param delegate The delegate that will receive the result of the operation
///
+ (void)getOCRConfigsWithDelegate:(id <SBNWProxyDelegate> _Nonnull)delegate;
@end

typedef SWIFT_ENUM(NSInteger, SBNWPlatform, open) {
  SBNWPlatformUnknown = 0,
  SBNWPlatformCordova = 1,
  SBNWPlatformReactNative = 2,
};


SWIFT_PROTOCOL("_TtP23ScanbotSDKNativeWrapper17SBNWProxyDelegate_")
@protocol SBNWProxyDelegate
- (void)didResolvePromiseWithResult:(NSDictionary<NSString *, id> * _Nonnull)result;
- (void)didRejectPromiseWithError:(NSDictionary<NSString *, id> * _Nonnull)error;
@end


SWIFT_PROTOCOL("_TtP23ScanbotSDKNativeWrapper29SBNWProxyEventEmitterDelegate_")
@protocol SBNWProxyEventEmitterDelegate
- (void)didEmitEventWithName:(NSString * _Nonnull)name body:(NSString * _Nonnull)body;
@end


SWIFT_CLASS("_TtC23ScanbotSDKNativeWrapper16SBNWReadyToUseUi")
@interface SBNWReadyToUseUi : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class SBSDKUIDocumentScannerViewController;

@interface SBNWReadyToUseUi (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
+ (SBSDKUIDocumentScannerViewController * _Nullable)createDocumentScannerViewControllerWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate SWIFT_WARN_UNUSED_RESULT;
@end

@class SBSDKUIFinderDocumentScannerViewController;

@interface SBNWReadyToUseUi (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
+ (SBSDKUIFinderDocumentScannerViewController * _Nullable)createFinderDocumentScannerViewControllerWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate SWIFT_WARN_UNUSED_RESULT;
@end

@class SBSDKUIMRZScannerViewController;

@interface SBNWReadyToUseUi (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
+ (SBSDKUIMRZScannerViewController * _Nullable)createMrzScannerViewControllerWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate SWIFT_WARN_UNUSED_RESULT;
@end

@class SBSDKUILicensePlateScannerViewController;

@interface SBNWReadyToUseUi (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
+ (SBSDKUILicensePlateScannerViewController * _Nullable)createLicensePlateScannerViewControllerWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate SWIFT_WARN_UNUSED_RESULT;
@end

@class SBSDKUIBarcodeScannerViewController;

@interface SBNWReadyToUseUi (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
+ (SBSDKUIBarcodeScannerViewController * _Nullable)createBarcodeScannerViewControllerWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate SWIFT_WARN_UNUSED_RESULT;
@end

@class SBSDKUIMedicalCertificateScannerViewController;

@interface SBNWReadyToUseUi (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
+ (SBSDKUIMedicalCertificateScannerViewController * _Nullable)createMedicalCertificateScannerViewControllerWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate SWIFT_WARN_UNUSED_RESULT;
@end

@class SBSDKUICheckRecognizerViewController;

@interface SBNWReadyToUseUi (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
+ (SBSDKUICheckRecognizerViewController * _Nullable)createCheckRecognizerViewControllerWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate SWIFT_WARN_UNUSED_RESULT;
@end

@class SBSDKUIBarcodesBatchScannerViewController;

@interface SBNWReadyToUseUi (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
+ (SBSDKUIBarcodesBatchScannerViewController * _Nullable)createBatchBarcodeScannerViewControllerWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate SWIFT_WARN_UNUSED_RESULT;
@end

@class SBSDKUIHealthInsuranceCardScannerViewController;

@interface SBNWReadyToUseUi (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
+ (SBSDKUIHealthInsuranceCardScannerViewController * _Nullable)createEhicScannerViewControllerWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate SWIFT_WARN_UNUSED_RESULT;
@end

@class SBSDKUITextDataScannerViewController;

@interface SBNWReadyToUseUi (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
+ (SBSDKUITextDataScannerViewController * _Nullable)createTextDataScannerViewControllerWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate eventEmitterDelegate:(id <SBNWProxyEventEmitterDelegate> _Nullable)eventEmitterDelegate SWIFT_WARN_UNUSED_RESULT;
@end

@class SBSDKUICroppingViewController;

@interface SBNWReadyToUseUi (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
+ (SBSDKUICroppingViewController * _Nullable)createCroppingScreenViewControllerWithPage:(NSDictionary<NSString *, id> * _Nonnull)page configuration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate SWIFT_WARN_UNUSED_RESULT;
@end

@class SBSDKUIGenericDocumentRecognizerViewController;

@interface SBNWReadyToUseUi (SWIFT_EXTENSION(ScanbotSDKNativeWrapper))
+ (SBSDKUIGenericDocumentRecognizerViewController * _Nullable)createGenericDocumentRecognizerViewControllerWithConfiguration:(NSDictionary<NSString *, id> * _Nonnull)configuration delegate:(id <SBNWProxyDelegate> _Nonnull)delegate SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC23ScanbotSDKNativeWrapper23SBNWSharedConfiguration")
@interface SBNWSharedConfiguration : NSObject
@property (nonatomic, strong) SBNWConfiguration * _Nonnull sdkConfiguration;
@property (nonatomic) enum SBNWPlatform currentPlatform;
@property (nonatomic) BOOL isSDKInitialized;
@property (nonatomic) BOOL isEncryptionEnabled;
@property (nonatomic, strong) id <SBNWLogger> _Nonnull logger;
@property (nonatomic, strong) SBSDKIndexedImageStorage * _Nullable imageStorage;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SBNWSharedConfiguration * _Nonnull defaultConfiguration;)
+ (SBNWSharedConfiguration * _Nonnull)defaultConfiguration SWIFT_WARN_UNUSED_RESULT;
@end



















































@class UIImage;

SWIFT_CLASS("_TtC23ScanbotSDKNativeWrapper19ScanbotStorageUtils")
@interface ScanbotStorageUtils : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull pluginStorageSubDirectory;)
+ (NSString * _Nonnull)pluginStorageSubDirectory SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull pluginInternalStorageSubDirectory;)
+ (NSString * _Nonnull)pluginInternalStorageSubDirectory SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSURL * _Nullable pluginStorageDirectoryURL;)
+ (NSURL * _Nullable)pluginStorageDirectoryURL SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull pluginStorageDirectoryPath;)
+ (NSString * _Nonnull)pluginStorageDirectoryPath SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSURL * _Nullable applicationSupportFolderURL;)
+ (NSURL * _Nullable)applicationSupportFolderURL SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSURL * _Nullable scanbotSDKApplicationSupportFolder;)
+ (NSURL * _Nullable)scanbotSDKApplicationSupportFolder SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL pluginStorageDirectoryExists;)
+ (BOOL)pluginStorageDirectoryExists SWIFT_WARN_UNUSED_RESULT;
+ (void)recreateFolderIfNeeded:(NSString * _Nonnull)folderPath;
+ (NSString * _Nonnull)generateFileNameWithExtensionWithFileExtension:(NSString * _Nonnull)fileExtension SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)generatePluginStorageFilePathWithFileExtension:(NSString * _Nonnull)fileExtension SWIFT_WARN_UNUSED_RESULT;
+ (SBSDKIndexedImageStorage * _Nullable)createImageStorageWithSubpath:(NSString * _Nonnull)subpath SWIFT_WARN_UNUSED_RESULT;
+ (UIImage * _Nullable)loadImageWithImageFilePath:(NSString * _Nonnull)imageFilePath SWIFT_WARN_UNUSED_RESULT;
+ (NSData * _Nullable)loadDataWithFilePath:(NSString * _Nonnull)filePath SWIFT_WARN_UNUSED_RESULT;
+ (NSURL * _Nullable)saveImageInStorage:(UIImage * _Nonnull)image SWIFT_WARN_UNUSED_RESULT;
+ (NSError * _Nullable)removeAllFilesFromPluginStorageDirectory SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)imageFileExistsWithImageFileUri:(NSString * _Nonnull)imageFileUri SWIFT_WARN_UNUSED_RESULT;
+ (NSURL * _Nonnull)createRandomTempStorageDirectory SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif