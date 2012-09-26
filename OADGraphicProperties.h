/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray, OADShape3D, OADScene3D, OADFill, OADStroke;

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
    OADFill *mFill;
    NSArray *mEffects;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
    OADStroke *mStroke;
    unsigned int mHasIsBehindText : 1;
    unsigned int mIsBehindText : 1;
}


- (id)shape3D;
- (id)scene3D;
- (BOOL)hasIsBehindText;
- (BOOL)hasShape3D;
- (BOOL)hasScene3D;
- (void)setShape3D:(id)arg1;
- (void)setScene3D:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (id)initWithDefaults;
- (void)setIsBehindText:(BOOL)arg1;
- (void)setEffects:(id)arg1;
- (BOOL)hasEffects;
- (id)effects;
- (BOOL)hasStroke;
- (BOOL)hasFill;
- (void)setStroke:(id)arg1;
- (void)setFill:(id)arg1;
- (BOOL)isBehindText;
- (void)setParent:(id)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)stroke;
- (id)fill;

@end
