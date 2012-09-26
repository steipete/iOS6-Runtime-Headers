/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShiftResponse : PBCodable  {
    struct { 
        double _x; 
        double _y; 
        int _z; 
        struct { 
            unsigned int z : 1; 
        } _has; 
    } _shiftedPixel;
}

@property(readonly) struct { double x1; double x2; } shiftedCoordinate;
@property struct { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; } x4; } shiftedPixel;


- (struct { double x1; double x2; })shiftedCoordinate;
- (void)setShiftedPixel:(struct { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; } x4; })arg1;
- (struct { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; } x4; })shiftedPixel;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)dictionaryRepresentation;

@end
