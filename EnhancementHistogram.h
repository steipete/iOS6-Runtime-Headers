/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface EnhancementHistogram : NSObject  {
    float hist[256];
}

+ (id)histogramFromDoubleData:(const double*)arg1;
+ (id)histogramFromFloatData:(const float*)arg1;
+ (id)histogramFromData:(const float*)arg1;

- (const float*)values;

@end
