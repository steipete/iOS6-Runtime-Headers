/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOVCharacteristics, NSData, NSMutableArray;

@interface GEOVFeature : PBCodable  {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _extrusionHeights;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _labelOffsets;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _shieldLabelOffsets;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _shieldLabelTypes;
    unsigned long long _businessID;
    long long _uID;
    unsigned int _centerlineCount;
    unsigned int _centerlineStart;
    GEOVCharacteristics *_characteristics;
    float _endLaneWidth;
    float _endOffset;
    float _endRoadOffset;
    unsigned int _entryPointMask;
    int _formOfWay;
    float _minzoomRank;
    NSData *_oBSOLETECenterlines;
    NSData *_oBSOLETEShieldLabelPositions;
    NSData *_oBSOLETEVertexLabelPositions;
    int _placeType;
    NSData *_pointLabelPosition;
    int _roadClass;
    int _sectionCount;
    int _sectionStart;
    int _speedLimit;
    float _startLaneWidth;
    float _startOffset;
    float _startRoadOffset;
    NSMutableArray *_styleAttributes;
    unsigned int _styleGroup;
    int _travelDirection;
    int _type;
    BOOL _polyIsConvex;
    struct { 
        unsigned int businessID : 1; 
        unsigned int uID : 1; 
        unsigned int centerlineCount : 1; 
        unsigned int centerlineStart : 1; 
        unsigned int endLaneWidth : 1; 
        unsigned int endOffset : 1; 
        unsigned int endRoadOffset : 1; 
        unsigned int entryPointMask : 1; 
        unsigned int formOfWay : 1; 
        unsigned int minzoomRank : 1; 
        unsigned int placeType : 1; 
        unsigned int roadClass : 1; 
        unsigned int sectionCount : 1; 
        unsigned int sectionStart : 1; 
        unsigned int speedLimit : 1; 
        unsigned int startLaneWidth : 1; 
        unsigned int startOffset : 1; 
        unsigned int startRoadOffset : 1; 
        unsigned int styleGroup : 1; 
        unsigned int travelDirection : 1; 
        unsigned int type : 1; 
        unsigned int polyIsConvex : 1; 
    } _has;
}

@property(readonly) unsigned int labelOffsetsCount;
@property(readonly) int* labelOffsets;
@property(readonly) unsigned int shieldLabelOffsetsCount;
@property(readonly) int* shieldLabelOffsets;
@property(readonly) unsigned int shieldLabelTypesCount;
@property(readonly) int* shieldLabelTypes;
@property BOOL hasUID;
@property long long uID;
@property BOOL hasBusinessID;
@property unsigned long long businessID;
@property BOOL hasPlaceType;
@property int placeType;
@property BOOL hasPolyIsConvex;
@property BOOL polyIsConvex;
@property BOOL hasRoadClass;
@property int roadClass;
@property BOOL hasFormOfWay;
@property int formOfWay;
@property BOOL hasTravelDirection;
@property int travelDirection;
@property BOOL hasSectionStart;
@property int sectionStart;
@property BOOL hasSectionCount;
@property int sectionCount;
@property(readonly) BOOL hasPointLabelPosition;
@property(retain) NSData * pointLabelPosition;
@property(readonly) BOOL hasOBSOLETEVertexLabelPositions;
@property(retain) NSData * oBSOLETEVertexLabelPositions;
@property(readonly) BOOL hasOBSOLETEShieldLabelPositions;
@property(retain) NSData * oBSOLETEShieldLabelPositions;
@property BOOL hasStyleGroup;
@property unsigned int styleGroup;
@property BOOL hasSpeedLimit;
@property int speedLimit;
@property(readonly) unsigned int extrusionHeightsCount;
@property(readonly) int* extrusionHeights;
@property(readonly) BOOL hasCharacteristics;
@property(retain) GEOVCharacteristics * characteristics;
@property BOOL hasStartOffset;
@property float startOffset;
@property BOOL hasEndOffset;
@property float endOffset;
@property BOOL hasMinzoomRank;
@property float minzoomRank;
@property(readonly) BOOL hasOBSOLETECenterlines;
@property(retain) NSData * oBSOLETECenterlines;
@property BOOL hasCenterlineCount;
@property unsigned int centerlineCount;
@property BOOL hasCenterlineStart;
@property unsigned int centerlineStart;
@property(retain) NSMutableArray * styleAttributes;
@property BOOL hasType;
@property int type;
@property BOOL hasStartLaneWidth;
@property float startLaneWidth;
@property BOOL hasEndLaneWidth;
@property float endLaneWidth;
@property BOOL hasStartRoadOffset;
@property float startRoadOffset;
@property BOOL hasEndRoadOffset;
@property float endRoadOffset;
@property BOOL hasEntryPointMask;
@property unsigned int entryPointMask;


- (id)styleAttributes;
- (void)setHasEntryPointMask:(BOOL)arg1;
- (void)setHasEndRoadOffset:(BOOL)arg1;
- (void)setHasStartRoadOffset:(BOOL)arg1;
- (void)setHasEndLaneWidth:(BOOL)arg1;
- (void)setHasStartLaneWidth:(BOOL)arg1;
- (void)setHasCenterlineStart:(BOOL)arg1;
- (void)setHasCenterlineCount:(BOOL)arg1;
- (void)setHasMinzoomRank:(BOOL)arg1;
- (void)setHasEndOffset:(BOOL)arg1;
- (void)setHasStartOffset:(BOOL)arg1;
- (void)setExtrusionHeights:(int*)arg1 count:(unsigned int)arg2;
- (int*)extrusionHeights;
- (void)setHasSpeedLimit:(BOOL)arg1;
- (void)setHasStyleGroup:(BOOL)arg1;
- (void)setHasSectionCount:(BOOL)arg1;
- (void)setHasSectionStart:(BOOL)arg1;
- (void)setHasTravelDirection:(BOOL)arg1;
- (void)setHasFormOfWay:(BOOL)arg1;
- (void)setHasRoadClass:(BOOL)arg1;
- (void)setHasPolyIsConvex:(BOOL)arg1;
- (void)setHasPlaceType:(BOOL)arg1;
- (void)setShieldLabelTypes:(int*)arg1 count:(unsigned int)arg2;
- (int*)shieldLabelTypes;
- (void)setShieldLabelOffsets:(int*)arg1 count:(unsigned int)arg2;
- (int*)shieldLabelOffsets;
- (void)setLabelOffsets:(int*)arg1 count:(unsigned int)arg2;
- (int*)labelOffsets;
- (void)setEntryPointMask:(unsigned int)arg1;
- (unsigned int)entryPointMask;
- (BOOL)hasEntryPointMask;
- (void)setEndRoadOffset:(float)arg1;
- (float)endRoadOffset;
- (BOOL)hasEndRoadOffset;
- (void)setStartRoadOffset:(float)arg1;
- (float)startRoadOffset;
- (BOOL)hasStartRoadOffset;
- (void)setEndLaneWidth:(float)arg1;
- (float)endLaneWidth;
- (BOOL)hasEndLaneWidth;
- (void)setStartLaneWidth:(float)arg1;
- (float)startLaneWidth;
- (BOOL)hasStartLaneWidth;
- (id)styleAttributesAtIndex:(unsigned int)arg1;
- (void)clearStyleAttributes;
- (unsigned int)styleAttributesCount;
- (void)setCenterlineStart:(unsigned int)arg1;
- (unsigned int)centerlineStart;
- (BOOL)hasCenterlineStart;
- (void)setCenterlineCount:(unsigned int)arg1;
- (unsigned int)centerlineCount;
- (BOOL)hasCenterlineCount;
- (id)oBSOLETECenterlines;
- (BOOL)hasOBSOLETECenterlines;
- (void)setMinzoomRank:(float)arg1;
- (float)minzoomRank;
- (BOOL)hasMinzoomRank;
- (void)setEndOffset:(float)arg1;
- (BOOL)hasEndOffset;
- (void)setStartOffset:(float)arg1;
- (BOOL)hasStartOffset;
- (id)characteristics;
- (BOOL)hasCharacteristics;
- (void)addExtrusionHeight:(int)arg1;
- (int)extrusionHeightAtIndex:(unsigned int)arg1;
- (void)clearExtrusionHeights;
- (unsigned int)extrusionHeightsCount;
- (void)addShieldLabelType:(int)arg1;
- (int)shieldLabelTypeAtIndex:(unsigned int)arg1;
- (void)clearShieldLabelTypes;
- (unsigned int)shieldLabelTypesCount;
- (void)setSpeedLimit:(int)arg1;
- (int)speedLimit;
- (BOOL)hasSpeedLimit;
- (void)setStyleGroup:(unsigned int)arg1;
- (unsigned int)styleGroup;
- (BOOL)hasStyleGroup;
- (id)oBSOLETEShieldLabelPositions;
- (BOOL)hasOBSOLETEShieldLabelPositions;
- (id)oBSOLETEVertexLabelPositions;
- (BOOL)hasOBSOLETEVertexLabelPositions;
- (id)pointLabelPosition;
- (BOOL)hasPointLabelPosition;
- (void)setSectionCount:(int)arg1;
- (int)sectionCount;
- (BOOL)hasSectionCount;
- (void)setSectionStart:(int)arg1;
- (int)sectionStart;
- (BOOL)hasSectionStart;
- (void)setTravelDirection:(int)arg1;
- (int)travelDirection;
- (BOOL)hasTravelDirection;
- (void)setFormOfWay:(int)arg1;
- (int)formOfWay;
- (BOOL)hasFormOfWay;
- (void)setRoadClass:(int)arg1;
- (int)roadClass;
- (BOOL)hasRoadClass;
- (void)setPolyIsConvex:(BOOL)arg1;
- (BOOL)polyIsConvex;
- (BOOL)hasPolyIsConvex;
- (void)setPlaceType:(int)arg1;
- (int)placeType;
- (BOOL)hasPlaceType;
- (void)addShieldLabelOffset:(int)arg1;
- (int)shieldLabelOffsetAtIndex:(unsigned int)arg1;
- (void)clearShieldLabelOffsets;
- (unsigned int)shieldLabelOffsetsCount;
- (void)addLabelOffset:(int)arg1;
- (int)labelOffsetAtIndex:(unsigned int)arg1;
- (void)clearLabelOffsets;
- (unsigned int)labelOffsetsCount;
- (void)addStyleAttributes:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setOBSOLETECenterlines:(id)arg1;
- (void)setCharacteristics:(id)arg1;
- (void)setOBSOLETEShieldLabelPositions:(id)arg1;
- (void)setOBSOLETEVertexLabelPositions:(id)arg1;
- (void)setPointLabelPosition:(id)arg1;
- (void)setHasBusinessID:(BOOL)arg1;
- (void)setBusinessID:(unsigned long long)arg1;
- (unsigned long long)businessID;
- (BOOL)hasBusinessID;
- (void)setHasUID:(BOOL)arg1;
- (void)setUID:(long long)arg1;
- (long long)uID;
- (BOOL)hasUID;
- (void)setHasType:(BOOL)arg1;
- (BOOL)hasType;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setType:(int)arg1;
- (float)endOffset;
- (float)startOffset;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (int)type;
- (id)dictionaryRepresentation;

@end
