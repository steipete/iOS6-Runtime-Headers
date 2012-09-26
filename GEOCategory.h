/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface GEOCategory : PBCodable  {
    long long _geoOntologyId;
    NSString *_alias;
    int _level;
    NSMutableArray *_localizedNames;
    struct { 
        unsigned int geoOntologyId : 1; 
    } _has;
}

@property(retain) NSString * alias;
@property int level;
@property BOOL hasGeoOntologyId;
@property long long geoOntologyId;
@property(retain) NSMutableArray * localizedNames;


- (id)localizedNames;
- (void)setHasGeoOntologyId:(BOOL)arg1;
- (id)localizedNamesAtIndex:(unsigned int)arg1;
- (void)clearLocalizedNames;
- (unsigned int)localizedNamesCount;
- (void)setGeoOntologyId:(long long)arg1;
- (long long)geoOntologyId;
- (BOOL)hasGeoOntologyId;
- (void)addLocalizedNames:(id)arg1;
- (void)setLocalizedNames:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setAlias:(id)arg1;
- (id)alias;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (int)level;
- (void)setLevel:(int)arg1;
- (id)dictionaryRepresentation;

@end
