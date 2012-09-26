/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class NSDate;

@interface CLHeading : NSObject <NSCopying, NSCoding> {
    id _internal;
}

@property(readonly) double magneticHeading;
@property(readonly) double trueHeading;
@property(readonly) double headingAccuracy;
@property(readonly) double x;
@property(readonly) double y;
@property(readonly) double z;
@property(readonly) NSDate * timestamp;


- (double)trueHeading;
- (id)initWithClientHeading:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; })arg1;
- (double)headingAccuracy;
- (double)magneticHeading;
- (id)shortDescription;
- (id)timestamp;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)z;
- (double)y;
- (double)x;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
