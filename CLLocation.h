/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class NSDate, NSString;

@interface CLLocation : NSObject <NSCopying, NSCoding> {
    id _internal;
}

@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) double altitude;
@property(readonly) double horizontalAccuracy;
@property(readonly) double verticalAccuracy;
@property(readonly) double course;
@property(readonly) double speed;
@property(readonly) NSDate * timestamp;
@property(readonly) struct { int x1; int x2; struct { double x_3_1_1; double x_3_1_2; } x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; int x14; double x15; int x16; struct { double x_17_1_1; double x_17_1_2; } x17; double x18; } clientLocation;
@property(readonly) NSString * iso6709Notation;
@property(readonly) int type;
@property(readonly) struct { double x1; double x2; } rawCoordinate;
@property(readonly) double rawCourse;


- (id)iso6709Notation;
- (void)setHorizontalAccuracy:(double)arg1;
- (id)propagateLocationToTime:(double)arg1;
- (id)snapToResolution:(double)arg1;
- (double)getDistanceFrom:(id)arg1;
- (double)rawCourse;
- (struct { int x1; int x2; struct { double x_3_1_1; double x_3_1_2; } x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; int x14; double x15; int x16; struct { double x_17_1_1; double x_17_1_2; } x17; double x18; })clientLocation;
- (struct { double x1; double x2; })rawCoordinate;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7;
- (double)distanceFromLocation:(id)arg1;
- (id)_initWithCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithClientLocation:(struct { int x1; int x2; struct { double x_3_1_1; double x_3_1_2; } x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; int x14; double x15; int x16; struct { double x_17_1_1; double x_17_1_2; } x17; double x18; })arg1;
- (double)horizontalAccuracy;
- (struct { double x1; double x2; })coordinate;
- (double)course;
- (double)verticalAccuracy;
- (double)altitude;
- (double)speed;
- (id)shortDescription;
- (id)timestamp;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
