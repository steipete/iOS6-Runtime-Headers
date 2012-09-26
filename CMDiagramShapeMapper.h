/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADOrientedBounds, NSString;

@interface CMDiagramShapeMapper : CMDiagramMapper  {
    int mChildCount;
    OADOrientedBounds *mDiagramShapeBounds;
    NSString *mIdentifier;
    float mDefaultFontSize;
    int mMaxMappableTreeDepth;
    float mDefaultScale;
}


- (void)setDefaultFonSize;
- (struct CGSize { float x1; float x2; })textSizeForShapeSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeForNode:(id)arg1 atIndex:(unsigned int)arg2;
- (float)setFonSizeForChildNode:(id)arg1 atIndex:(unsigned int)arg2 level:(int)arg3;
- (void)setFonSizeForChildNode:(id)arg1 atIndex:(unsigned int)arg2;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })circumscribedBounds;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (float)defaultFontSize;

@end
