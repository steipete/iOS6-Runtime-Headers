/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOPlaceSearchFeedbackCollection : PBCodable  {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionID;
    unsigned long long _businessID;
    long long _placeID;
    NSMutableArray *_actionCaptures;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int businessID : 1; 
        unsigned int placeID : 1; 
    } _has;
}

@property BOOL hasSessionID;
@property struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property BOOL hasBusinessID;
@property unsigned long long businessID;
@property BOOL hasPlaceID;
@property long long placeID;
@property(retain) NSMutableArray * actionCaptures;


- (id)actionCaptures;
- (void)setHasPlaceID:(BOOL)arg1;
- (id)actionCaptureAtIndex:(unsigned int)arg1;
- (void)clearActionCaptures;
- (unsigned int)actionCapturesCount;
- (void)setPlaceID:(long long)arg1;
- (long long)placeID;
- (BOOL)hasPlaceID;
- (void)addActionCapture:(id)arg1;
- (void)setActionCaptures:(id)arg1;
- (void)setHasBusinessID:(BOOL)arg1;
- (void)setBusinessID:(unsigned long long)arg1;
- (unsigned long long)businessID;
- (BOOL)hasBusinessID;
- (void)copyTo:(id)arg1;
- (void)setHasSessionID:(BOOL)arg1;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (BOOL)hasSessionID;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)dictionaryRepresentation;

@end
