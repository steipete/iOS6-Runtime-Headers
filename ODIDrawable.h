/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIDrawable : NSObject  {
}

+ (void)mapStyleForLabelName:(id)arg1 point:(id)arg2 shape:(id)arg3 state:(id)arg4;
+ (void)mapStyleForLabelName:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (id)shapeGeometryWithShapeType:(int)arg1 adjustValues:(const int*)arg2;
+ (void)addArrowHeadToShapeProperties:(id)arg1;
+ (id)styleForLabelName:(id)arg1 styleCount:(int)arg2 styleIndex:(int)arg3 state:(id)arg4;
+ (void)mapShapeProperties:(id)arg1 shapeStyle:(id)arg2 shape:(id)arg3 state:(id)arg4;
+ (void)mapShapeProperties:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (id)styleForPresentation:(id)arg1 point:(id)arg2 state:(id)arg3;
+ (id)presentationWithName:(id)arg1 point:(id)arg2;
+ (id)shapeGeometryForDoubleArrowWithControlPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (void)map1dArrowStyleToShape:(id)arg1 state:(id)arg2;
+ (void)map1dArrowStyleFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (id)shapeGeometryForBezierPath:(struct CGPath { }*)arg1 gSpace:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (id)shapeGeometryForEllipse;
+ (id)shapeGeometryForRoundedRectangleWithRadius:(float)arg1;
+ (void)mapStyleFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (id)shapeGeometryForRectangle;
+ (void)mapStyleForPresentationName:(id)arg1 point:(id)arg2 shape:(id)arg3 state:(id)arg4;
+ (struct CGSize { float x1; float x2; })sizeOfDiagram:(id)arg1;
+ (void)mapStyleAndTextFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (id)addShapeWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 rotation:(float)arg2 geometry:(id)arg3 state:(id)arg4;
+ (id)shapeGeometryForRightArrowWithControlPoint:(struct CGPoint { float x1; float x2; })arg1;


@end
