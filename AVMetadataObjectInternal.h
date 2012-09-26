/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, AVCaptureInput;

@interface AVMetadataObjectInternal : NSObject  {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } time;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } duration;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } bounds;
    NSString *type;
    AVCaptureInput *input;
}

@property struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property(retain) NSString * type;
@property(retain) AVCaptureInput * input;


- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (void)setType:(id)arg1;
- (void)setDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)init;
- (void)dealloc;
- (id)input;
- (void)setInput:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)type;

@end
