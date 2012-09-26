/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, NSString;

@interface GEOTransitAppLaunchFeedbackCollection : PBCodable  {
    double _timestamp;
    NSString *_bundleIdentifier;
    GEOLatLng *_destination;
    GEOLatLng *_source;
}

@property(retain) NSString * bundleIdentifier;
@property(retain) GEOLatLng * source;
@property(retain) GEOLatLng * destination;
@property double timestamp;


- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)setBundleIdentifier:(id)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)setDestination:(id)arg1;
- (id)destination;
- (id)source;
- (id)dictionaryRepresentation;
- (id)bundleIdentifier;

@end
