/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class LSApplicationProxy, NSArray, NSString, NSUUID, NSDictionary, NSURL;

@interface LSApplicationProxy : LSResourceProxy  {
    unsigned int _flags;
    unsigned int _bundleFlags;
    NSArray *_privateDocumentIconNames;
    LSApplicationProxy *_privateDocumentTypeOwner;
    NSURL *_bundleURL;
    NSString *_vendorID;
    NSString *_bundleVersion;
    NSString *_shortVersionString;
    NSString *_applicationType;
    NSString *_signerIdentity;
    NSDictionary *_entitlements;
    NSDictionary *_environmentVariables;
    NSArray *_directionsModes;
}

@property(readonly) NSString * applicationIdentifier;
@property(readonly) NSString * roleIdentifier;
@property(readonly) NSURL * bundleURL;
@property(readonly) NSURL * containerURL;
@property(readonly) NSString * vendorID;
@property(readonly) NSString * bundleVersion;
@property(readonly) NSString * shortVersionString;
@property(readonly) NSString * applicationType;
@property(readonly) NSString * signerIdentity;
@property(readonly) BOOL profileValidated;
@property(readonly) NSDictionary * entitlements;
@property(readonly) NSDictionary * environmentVariables;
@property(readonly) NSArray * directionsModes;
@property(readonly) NSUUID * deviceIdentifierForVendor;

+ (id)applicationProxyForIdentifier:(id)arg1 roleIdentifier:(id)arg2;
+ (id)applicationProxyForIdentifier:(id)arg1;

- (id)bundleVersion;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)setPrivateDocumentTypeOwner:(id)arg1;
- (id)privateDocumentTypeOwner;
- (void)setPrivateDocumentIconAllowOverride:(BOOL)arg1;
- (void)setPrivateDocumentIconNames:(id)arg1;
- (id)directionsModes;
- (id)environmentVariables;
- (id)entitlements;
- (BOOL)profileValidated;
- (id)signerIdentity;
- (id)applicationType;
- (id)shortVersionString;
- (id)vendorID;
- (id)bundleURL;
- (id)roleIdentifier;
- (id)_plistValueForKey:(id)arg1;
- (id)_initWithApplicationIdentifier:(id)arg1 name:(id)arg2 containerURL:(id)arg3 resourcesDirectoryURL:(id)arg4 iconsDictionary:(id)arg5 iconFileNames:(id)arg6 iconIsPrerendered:(BOOL)arg7;
- (id)localizedName;
- (id)privateDocumentIconNames;
- (id)applicationIdentifier;
- (id)containerURL;
- (id)resourcesDirectoryURL;
- (id)iconStyleDomain;
- (BOOL)privateDocumentIconAllowOverride;
- (id)description;
- (id)deviceIdentifierForVendor;
- (struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_iconVariantDefinitions:(id)arg1;
- (struct CGSize { float x1; float x2; })_defaultStyleSize:(id)arg1;

@end
