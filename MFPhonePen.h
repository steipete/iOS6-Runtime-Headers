/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPhonePen : MFPen  {
    float m_PixelSize;
}

+ (id)penWithStyle:(int)arg1 width:(long)arg2 colour:(id)arg3 styleArray:(double*)arg4 LPToDPTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5;

- (void)applyLineJoinStyle:(id)arg1;
- (void)applyLineCapStyle;
- (void)applyDashedLines;
- (void)strokePath:(id)arg1 :(struct CGPath { }*)arg2;
- (id)initWithStyle:(int)arg1 width:(long)arg2 colour:(id)arg3 styleArray:(double*)arg4;

@end
