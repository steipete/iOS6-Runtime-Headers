/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSString, NSDictionary;

@interface ALCity : NSObject  {
    int _identifier;
    NSString *_localeCode;
    NSString *_timeZone;
    float _longitude;
    float _latitude;
    NSString *_yahooCode;
    NSString *_name;
    NSString *_unlocalizedName;
    NSString *_countryName;
    NSString *_unlocalizedCountryName;
    NSString *_countryOverride;
    NSString *_unlocalizedCountryOverride;
    NSString *_identifierForCPCity;
    BOOL _localizationAttempted;
}

@property(readonly) NSString * classicIdentifier;
@property(readonly) NSDictionary * properties;
@property int identifier;
@property(retain) NSString * localeCode;
@property(retain) NSString * timeZone;
@property float longitude;
@property float latitude;
@property(retain) NSString * yahooCode;
@property(retain) NSString * name;
@property(retain) NSString * unlocalizedName;
@property(retain) NSString * countryName;
@property(retain) NSString * unlocalizedCountryName;
@property(retain) NSString * countryOverride;
@property(retain) NSString * unlocalizedCountryOverride;


- (void)setUnlocalizedCountryOverride:(id)arg1;
- (void)setYahooCode:(id)arg1;
- (id)yahooCode;
- (void)setLatitude:(float)arg1;
- (void)setLongitude:(float)arg1;
- (void)setLocaleCode:(id)arg1;
- (void)setUnlocalizedCountryName:(id)arg1;
- (void)setUnlocalizedName:(id)arg1;
- (id)classicIdentifier;
- (id)displayNameIncludingCountry:(BOOL)arg1;
- (id)unlocalizedCountryOverride;
- (void)ensureLocalized;
- (id)displayNameIncludingCountry:(BOOL)arg1 withFormat:(id)arg2;
- (id)countryOverride;
- (id)initWithSQLRow:(char **)arg1;
- (float)longitude;
- (float)latitude;
- (id)unlocalizedCountryName;
- (id)unlocalizedName;
- (id)countryName;
- (void)setCountryOverride:(id)arg1;
- (void)setCountryName:(id)arg1;
- (id)localeCode;
- (id)init;
- (void)dealloc;
- (id)timeZone;
- (void)setTimeZone:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)name;
- (id)description;
- (void)setIdentifier:(int)arg1;
- (int)identifier;
- (id)properties;
- (id)initWithProperties:(id)arg1;
- (void)setName:(id)arg1;

@end
