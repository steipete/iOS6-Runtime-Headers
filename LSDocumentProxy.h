/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSString;

@interface LSDocumentProxy : LSResourceProxy  {
    NSString *_name;
    NSString *_typeIdentifier;
    NSString *_MIMEType;
}

@property(readonly) NSString * name;
@property(readonly) NSString * typeIdentifier;
@property(readonly) NSString * MIMEType;

+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3;

- (void)dealloc;
- (id)name;
- (id)MIMEType;
- (id)typeIdentifier;
- (id)initWithName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3;
- (void)bind;
- (id)iconStyleDomain;
- (struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_iconVariantDefinitions:(id)arg1;
- (struct CGSize { float x1; float x2; })_defaultStyleSize:(id)arg1;

@end
