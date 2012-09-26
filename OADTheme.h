/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADDefaultProperties, OADBaseStyles;

@interface OADTheme : NSObject  {
    OADBaseStyles *mBaseStyles;
    OADDefaultProperties *mShapeDefaults;
    OADDefaultProperties *mLineDefaults;
    OADDefaultProperties *mTextDefaults;
}


- (id)addTextDefaults;
- (id)addLineDefaults;
- (id)addShapeDefaults;
- (void)addDefaults;
- (id)textDefaults;
- (id)lineDefaults;
- (id)shapeDefaults;
- (id)baseStyles;
- (id)init;
- (void)dealloc;

@end
