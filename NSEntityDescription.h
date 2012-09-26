/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//CoreData.framework/CoreData
 */

@class NSEntityDescription, NSMutableDictionary, NSString, NSData, NSManagedObjectModel;

@interface NSEntityDescription : NSObject <NSCoding, NSCopying, NSFastEnumeration> {
    int _cd_rc;
    id _snapshotClass;
    NSString *_versionHashModifier;
    NSData *_versionHash;
    NSManagedObjectModel *_model;
    NSString *_classNameForEntity;
    Class _instanceClass;
    NSString *_name;
    NSEntityDescription *_rootentity;
    NSEntityDescription *_superentity;
    NSMutableDictionary *_subentities;
    NSMutableDictionary *_properties;
    id _propertyMapping;
    struct _NSRange { unsigned int x1; unsigned int x2; } *_propertyRanges;
    struct __entityDescriptionFlags { 
        unsigned int _isAbstract : 1; 
        unsigned int _shouldValidateOnSave : 1; 
        unsigned int _isImmutable : 1; 
        unsigned int _isFlattened : 1; 
        unsigned int _skipValidation : 1; 
        unsigned int _hasPropertiesIndexedBySpotlight : 1; 
        unsigned int _hasPropertiesStoredInTruthFile : 1; 
        unsigned int _rangesAreInDataBlob : 1; 
        unsigned int _hasAttributesWithExternalDataReferences : 1; 
        unsigned int _hasNonstandardPrimitiveProperties : 2; 
        unsigned int _reservedEntityDescription : 21; 
    } _entityDescriptionFlags;
    void *_extraIvars;
    NSMutableDictionary *_userInfo;
    id _flattenedSubentities;
    id **_kvcPropertyAccessors;
    long _modelsReferenceIDForEntity;
}

+ (id)insertNewObjectForEntityForName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)_MOClassName;
+ (id)entityForName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)initialize;

- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7;
- (BOOL)_hasPropertiesStoredInTruthFile;
- (BOOL)_hasPropertiesIndexedBySpotlight;
- (BOOL)_hasAttributesWithExternalDataReferences;
- (BOOL)_skipValidation;
- (id)_sortedSubentities;
- (void)_setModelsReferenceID:(long)arg1;
- (id)_new_implicitlyObservedKeys;
- (void*)_leopardStyleAttributesByName;
- (void*)_leopardStyleRelationshipsByName;
- (void*)_newSnowLeopardStyleDictionaryContainingPropertiesOfType:(unsigned int)arg1;
- (id)_allPropertyNames;
- (unsigned long)_offsetRelationshipIndex:(unsigned long)arg1 fromSuperEntity:(id)arg2 andIsToMany:(BOOL)arg3;
- (BOOL)_hasPotentialHashSkew;
- (id)_relationshipNamed:(id)arg1;
- (id)_attributeNamed:(id)arg1;
- (BOOL)_hasCustomPrimitiveProperties;
- (void)_setManagedObjectModel:(id)arg1;
- (void)_restoreValidation;
- (void)_stripForMigration;
- (void)_setIsFlattened:(BOOL)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; }*)_propertyRangesByType;
- (void)_removePropertyNamed:(id)arg1;
- (id)_newMappingForPropertiesOfRange:(unsigned int)arg1;
- (BOOL)_isInheritedPropertyNamed:(id)arg1;
- (struct __CFSet { }*)_collectSubentities;
- (void)_flattenProperties;
- (id)_localRelationshipNamed:(id)arg1;
- (void)_setIsEditable:(BOOL)arg1;
- (id)_propertyWithRenamingIdentifier:(id)arg1;
- (id)compoundIndexes;
- (id)knownKeysMappingStrategy;
- (id)elementID;
- (void)setElementID:(id)arg1;
- (void)_setSuperentity:(id)arg1;
- (id)_flattenedSubentities;
- (Class)_snapshotClass;
- (void)setVersionHashModifier:(id)arg1;
- (id)_newVersionHashInStyle:(unsigned int)arg1;
- (void)setAbstract:(BOOL)arg1;
- (void)setManagedObjectClassName:(id)arg1;
- (id)inverseForRelationshipKey:(id)arg1;
- (id)_keypathsForDeletions;
- (id)relationshipsWithDestinationEntity:(id)arg1;
- (id)toOneRelationshipKeys;
- (id)toManyRelationshipKeys;
- (id)subentities;
- (BOOL)isKindOfEntity:(id)arg1;
- (id)_versionHashInStyle:(unsigned int)arg1;
- (id)_subentityNamed:(id)arg1;
- (BOOL)_isFlattened;
- (void)_addProperty:(id)arg1;
- (void)_removeProperty:(id)arg1;
- (id)relationshipsByName;
- (id)_relationshipNamesByType:(BOOL)arg1;
- (void)_addSubentity:(id)arg1;
- (void)_removeSubentity:(id)arg1;
- (id)_propertiesOfType:(unsigned int)arg1;
- (id)attributesByName;
- (id)subentitiesByName;
- (id)managedObjectClassName;
- (id)_compoundIndexes;
- (void)setSubentities:(id)arg1;
- (void)setCompoundIndexes:(id)arg1;
- (void)setRenamingIdentifier:(id)arg1;
- (id)versionHashModifier;
- (id)superentity;
- (BOOL)isAbstract;
- (Class)_entityClass;
- (id)_propertySearchMapping;
- (long)_modelsReferenceID;
- (void)_createCachesAndOptimizeState;
- (void)_throwIfNotEditable;
- (id)_propertyNamed:(id)arg1;
- (BOOL)_subentitiesIncludes:(id)arg1;
- (id)_rootEntity;
- (id)versionHash;
- (id)renamingIdentifier;
- (id)propertiesByName;
- (id)attributeKeys;
- (BOOL)_isEditable;
- (id)_initWithName:(id)arg1;
- (id)init;
- (void)dealloc;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)name;
- (id)userInfo;
- (void)finalize;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)managedObjectModel;
- (void)setProperties:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)properties;
- (void)setName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
