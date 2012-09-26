/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion, NSMutableArray;

@interface GEOPlaceSearchResponse : PBCodable  {
    int _localSearchProviderID;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_placeResults;
    NSMutableArray *_searchs;
    int _status;
    int _statusCodeInfo;
    BOOL _abTestResponse;
    struct { 
        unsigned int localSearchProviderID : 1; 
        unsigned int statusCodeInfo : 1; 
        unsigned int abTestResponse : 1; 
    } _has;
}

@property int status;
@property(retain) NSMutableArray * placeResults;
@property(readonly) BOOL hasMapRegion;
@property(retain) GEOMapRegion * mapRegion;
@property(retain) NSMutableArray * searchs;
@property BOOL hasLocalSearchProviderID;
@property int localSearchProviderID;
@property BOOL hasAbTestResponse;
@property BOOL abTestResponse;
@property BOOL hasStatusCodeInfo;
@property int statusCodeInfo;


- (id)searchs;
- (id)placeResults;
- (void)setHasStatusCodeInfo:(BOOL)arg1;
- (void)setHasAbTestResponse:(BOOL)arg1;
- (void)setStatusCodeInfo:(int)arg1;
- (int)statusCodeInfo;
- (BOOL)hasStatusCodeInfo;
- (void)setAbTestResponse:(BOOL)arg1;
- (BOOL)abTestResponse;
- (BOOL)hasAbTestResponse;
- (id)searchAtIndex:(unsigned int)arg1;
- (void)clearSearchs;
- (unsigned int)searchsCount;
- (id)placeResultAtIndex:(unsigned int)arg1;
- (void)clearPlaceResults;
- (unsigned int)placeResultsCount;
- (void)addSearch:(id)arg1;
- (void)addPlaceResult:(id)arg1;
- (void)setSearchs:(id)arg1;
- (void)setPlaceResults:(id)arg1;
- (void)setHasLocalSearchProviderID:(BOOL)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (int)localSearchProviderID;
- (BOOL)hasLocalSearchProviderID;
- (void)copyTo:(id)arg1;
- (id)mapRegion;
- (BOOL)hasMapRegion;
- (void)setMapRegion:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (int)status;

@end
