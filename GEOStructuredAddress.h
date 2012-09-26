/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface GEOStructuredAddress : PBCodable  {
    struct { 
        long long *list; 
        unsigned int count; 
        unsigned int size; 
    } _geoIds;
    NSString *_administrativeArea;
    NSString *_administrativeAreaCode;
    NSMutableArray *_areaOfInterests;
    NSString *_country;
    NSString *_countryCode;
    NSMutableArray *_dependentLocalitys;
    NSString *_fullThoroughfare;
    NSString *_inlandWater;
    NSString *_locality;
    NSString *_ocean;
    NSString *_postCode;
    NSString *_postCodeExtension;
    NSString *_premise;
    NSString *_premises;
    NSString *_subAdministrativeArea;
    NSString *_subLocality;
    NSMutableArray *_subPremises;
    NSString *_subThoroughfare;
    NSString *_thoroughfare;
}

@property(readonly) BOOL hasCountry;
@property(retain) NSString * country;
@property(readonly) BOOL hasCountryCode;
@property(retain) NSString * countryCode;
@property(readonly) BOOL hasAdministrativeArea;
@property(retain) NSString * administrativeArea;
@property(readonly) BOOL hasAdministrativeAreaCode;
@property(retain) NSString * administrativeAreaCode;
@property(readonly) BOOL hasSubAdministrativeArea;
@property(retain) NSString * subAdministrativeArea;
@property(readonly) BOOL hasLocality;
@property(retain) NSString * locality;
@property(readonly) BOOL hasPostCode;
@property(retain) NSString * postCode;
@property(readonly) BOOL hasSubLocality;
@property(retain) NSString * subLocality;
@property(readonly) BOOL hasPremises;
@property(retain) NSString * premises;
@property(readonly) BOOL hasThoroughfare;
@property(retain) NSString * thoroughfare;
@property(readonly) BOOL hasSubThoroughfare;
@property(retain) NSString * subThoroughfare;
@property(readonly) BOOL hasFullThoroughfare;
@property(retain) NSString * fullThoroughfare;
@property(readonly) BOOL hasPostCodeExtension;
@property(retain) NSString * postCodeExtension;
@property(retain) NSMutableArray * areaOfInterests;
@property(readonly) BOOL hasInlandWater;
@property(retain) NSString * inlandWater;
@property(readonly) BOOL hasOcean;
@property(retain) NSString * ocean;
@property(retain) NSMutableArray * dependentLocalitys;
@property(readonly) BOOL hasPremise;
@property(retain) NSString * premise;
@property(retain) NSMutableArray * subPremises;
@property(readonly) unsigned int geoIdsCount;
@property(readonly) long long* geoIds;


- (id)subPremises;
- (id)dependentLocalitys;
- (void)setGeoIds:(long long*)arg1 count:(unsigned int)arg2;
- (long long*)geoIds;
- (void)addGeoId:(long long)arg1;
- (long long)geoIdAtIndex:(unsigned int)arg1;
- (void)clearGeoIds;
- (unsigned int)geoIdsCount;
- (id)subPremiseAtIndex:(unsigned int)arg1;
- (void)clearSubPremises;
- (unsigned int)subPremisesCount;
- (id)premise;
- (BOOL)hasPremise;
- (id)dependentLocalityAtIndex:(unsigned int)arg1;
- (void)clearDependentLocalitys;
- (unsigned int)dependentLocalitysCount;
- (id)areaOfInterestAtIndex:(unsigned int)arg1;
- (void)clearAreaOfInterests;
- (unsigned int)areaOfInterestsCount;
- (id)administrativeAreaCode;
- (BOOL)hasAdministrativeAreaCode;
- (void)addSubPremise:(id)arg1;
- (void)addDependentLocality:(id)arg1;
- (void)addAreaOfInterest:(id)arg1;
- (void)setSubPremises:(id)arg1;
- (void)setPremise:(id)arg1;
- (void)setDependentLocalitys:(id)arg1;
- (void)setPostCodeExtension:(id)arg1;
- (void)setAdministrativeAreaCode:(id)arg1;
- (void)setOcean:(id)arg1;
- (void)setInlandWater:(id)arg1;
- (void)setAreaOfInterests:(id)arg1;
- (void)setPostCode:(id)arg1;
- (void)setFullThoroughfare:(id)arg1;
- (void)setSubThoroughfare:(id)arg1;
- (void)setThoroughfare:(id)arg1;
- (void)setPremises:(id)arg1;
- (void)setSubLocality:(id)arg1;
- (void)setLocality:(id)arg1;
- (void)setSubAdministrativeArea:(id)arg1;
- (void)setAdministrativeArea:(id)arg1;
- (id)inlandWater;
- (BOOL)hasInlandWater;
- (id)ocean;
- (BOOL)hasOcean;
- (id)postCodeExtension;
- (BOOL)hasPostCodeExtension;
- (id)postCode;
- (BOOL)hasPostCode;
- (id)subThoroughfare;
- (BOOL)hasSubThoroughfare;
- (id)thoroughfare;
- (BOOL)hasThoroughfare;
- (id)fullThoroughfare;
- (BOOL)hasFullThoroughfare;
- (id)premises;
- (BOOL)hasPremises;
- (id)subLocality;
- (BOOL)hasSubLocality;
- (id)locality;
- (BOOL)hasLocality;
- (id)subAdministrativeArea;
- (BOOL)hasSubAdministrativeArea;
- (id)administrativeArea;
- (BOOL)hasAdministrativeArea;
- (BOOL)hasCountryCode;
- (BOOL)hasCountry;
- (void)copyTo:(id)arg1;
- (id)areaOfInterests;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setCountry:(id)arg1;
- (id)country;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)dictionaryRepresentation;

@end
