/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureInputPort, NSArray, AVCaptureOutput, NSMutableArray, AVCaptureVideoPreviewLayer;

@interface AVCaptureConnectionInternal : NSObject  {
    NSMutableArray *inputPorts;
    AVCaptureOutput *output;
    AVCaptureVideoPreviewLayer *videoPreviewLayer;
    BOOL active;
    BOOL enabled;
    int outputChangeSeedOnDisable;
    AVCaptureInputPort *audioInputPort;
    NSMutableArray *audioChannels;
    NSArray *audioChannelLevels;
    long long lastGetAudioLevelsTime;
    AVCaptureInputPort *videoInputPort;
    BOOL videoMirroringSupported;
    BOOL automaticallyAdjustsVideoMirroring;
    BOOL videoMirrored;
    BOOL videoOrientationSupported;
    int videoOrientation;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } videoMinFrameDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } videoMaxFrameDuration;
    float videoMaxScaleAndCropFactor;
    float videoScaleAndCropFactor;
    int videoRetainedBufferCountHint;
    BOOL enablesVideoStabilizationWhenAvailable;
    BOOL videoStabilizationEnabled;
}



@end
