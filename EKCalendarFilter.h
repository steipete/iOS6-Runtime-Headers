/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSMutableDictionary, NSMutableSet;

@interface EKCalendarFilter : NSObject <NSCopying> {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
    NSMutableSet *_calendarUIDs;

  /* Error parsing encoded ivar type info: ^{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}BII^{__CFArray}^{__CFString}ii^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}} */
    struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct __CFDictionary {} *x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; boolx8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; int x13; int x14; struct __CFString {} *x15; int x16; id x17; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x18; struct _opaque_pthread_mutex_t { long x_19_1_1; BOOL x_19_1_2[40]; } x19; } *_database;

    NSMutableDictionary *_queryCache;
    NSString *_searchTerm;
    int _entityType;
}

@property(copy) NSString * searchTerm;

+ (void)_addCalendarsForStoreWithUID:(id)arg1 toSet:(id)arg2 database:(struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct __CFDictionary {} *x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; boolx8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; int x13; int x14; struct __CFString {} *x15; int x16; id x17; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x18; struct _opaque_pthread_mutex_t { long x_19_1_1; BOOL x_19_1_2[40]; } x19; }*)arg3;
     /* Encoded args for previous method: v20@0:4@8@12^{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}BII^{__CFArray}^{__CFString}ii^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}}16 */

+ (void)_addCalendarUIDsFromPrefs:(id)arg1 toSet:(id)arg2 database:(struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct __CFDictionary {} *x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; boolx8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; int x13; int x14; struct __CFString {} *x15; int x16; id x17; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x18; struct _opaque_pthread_mutex_t { long x_19_1_1; BOOL x_19_1_2[40]; } x19; }*)arg3;
     /* Encoded args for previous method: v20@0:4@8@12^{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}BII^{__CFArray}^{__CFString}ii^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}}16 */

+ (void)_addCalendarWithUID:(id)arg1 toSet:(id)arg2 database:(struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct __CFDictionary {} *x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; boolx8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; int x13; int x14; struct __CFString {} *x15; int x16; id x17; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x18; struct _opaque_pthread_mutex_t { long x_19_1_1; BOOL x_19_1_2[40]; } x19; }*)arg3;
     /* Encoded args for previous method: v20@0:4@8@12^{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}BII^{__CFArray}^{__CFString}ii^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}}16 */


- (void)setSearchTerm:(id)arg1;
- (id)searchTerm;
- (id)calendarIDClauseForQueryWithVariableName:(id)arg1;
- (id)filterQueryForKey:(id)arg1 prefix:(id)arg2 whereClause:(id)arg3 creator:(int (*)())arg4 userInfo:(void*)arg5;
- (id)filterQueryForQueryString:(id)arg1 creator:(int (*)())arg2 userInfo:(void*)arg3;
- (void)validate;
- (void)removeCalendarWithUID:(id)arg1;
- (BOOL)isCalendarUIDVisible:(id)arg1;
- (int)visibleCalendarCountWithOptions:(int)arg1;
- (id)visibleCalendarsWithOptions:(int)arg1;
- (id)filteredCalendars;
- (BOOL)isFilteringAll;
- (id)initWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct __CFDictionary {} *x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; boolx8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; int x13; int x14; struct __CFString {} *x15; int x16; id x17; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x18; struct _opaque_pthread_mutex_t { long x_19_1_1; BOOL x_19_1_2[40]; } x19; }*)arg1 filteringCalendars:(id)arg2;
     /* Encoded args for previous method: @16@0:4^{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}BII^{__CFArray}^{__CFString}ii^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}}8@12 */

- (id)initWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct __CFDictionary {} *x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; boolx8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; int x13; int x14; struct __CFString {} *x15; int x16; id x17; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x18; struct _opaque_pthread_mutex_t { long x_19_1_1; BOOL x_19_1_2[40]; } x19; }*)arg1 entityType:(int)arg2 showingCalendarsWithUIDs:(id)arg3;
     /* Encoded args for previous method: @20@0:4^{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}BII^{__CFArray}^{__CFString}ii^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}}8i12@16 */

- (id)initWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct __CFDictionary {} *x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; boolx8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; int x13; int x14; struct __CFString {} *x15; int x16; id x17; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x18; struct _opaque_pthread_mutex_t { long x_19_1_1; BOOL x_19_1_2[40]; } x19; }*)arg1 showingCalendarsWithUIDs:(id)arg2;
     /* Encoded args for previous method: @16@0:4^{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}BII^{__CFArray}^{__CFString}ii^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}}8@12 */

- (id)initWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct __CFDictionary {} *x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; boolx8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; int x13; int x14; struct __CFString {} *x15; int x16; id x17; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x18; struct _opaque_pthread_mutex_t { long x_19_1_1; BOOL x_19_1_2[40]; } x19; }*)arg1 showingCalendars:(id)arg2;
     /* Encoded args for previous method: @16@0:4^{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}BII^{__CFArray}^{__CFString}ii^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}}8@12 */

- (id)initFilteringAllWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct __CFDictionary {} *x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; boolx8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; int x13; int x14; struct __CFString {} *x15; int x16; id x17; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x18; struct _opaque_pthread_mutex_t { long x_19_1_1; BOOL x_19_1_2[40]; } x19; }*)arg1;
     /* Encoded args for previous method: @12@0:4^{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}BII^{__CFArray}^{__CFString}ii^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}}8 */

- (id)initWithPersistentIdentifier:(id)arg1 database:(struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct __CFDictionary {} *x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; boolx8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; int x13; int x14; struct __CFString {} *x15; int x16; id x17; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x18; struct _opaque_pthread_mutex_t { long x_19_1_1; BOOL x_19_1_2[40]; } x19; }*)arg2;
     /* Encoded args for previous method: @16@0:4@8^{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}BII^{__CFArray}^{__CFString}ii^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}}12 */

- (id)initWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct __CFDictionary {} *x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; boolx8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; int x13; int x14; struct __CFString {} *x15; int x16; id x17; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x18; struct _opaque_pthread_mutex_t { long x_19_1_1; BOOL x_19_1_2[40]; } x19; }*)arg1 entityType:(int)arg2;
     /* Encoded args for previous method: @16@0:4^{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}BII^{__CFArray}^{__CFString}ii^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}}8i12 */

- (id)initWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct __CFDictionary {} *x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; boolx8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; int x13; int x14; struct __CFString {} *x15; int x16; id x17; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x18; struct _opaque_pthread_mutex_t { long x_19_1_1; BOOL x_19_1_2[40]; } x19; }*)arg1;
     /* Encoded args for previous method: @12@0:4^{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}BII^{__CFArray}^{__CFString}ii^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}}8 */

- (id)_UIDAntiSetWithCalendars:(id)arg1;
- (id)_addFilterToQuery:(id)arg1 creator:(int (*)())arg2 userInfo:(void*)arg3;
- (BOOL)isShowingAll;
- (BOOL)_isFilteringAllWhileLocked;
- (id)_UIDSetWithCalendars:(id)arg1;
- (void)_databaseChanged;
- (id)_generateUIDSetToFilterCalendars:(id)arg1;
- (id)_generateUIDSetToShowCalendarUIDs:(id)arg1;
- (id)_generateUIDSetToShowCalendars:(id)arg1;
- (id)_generateUIDSetToFilterAllCalendars;
- (id)_calendarUIDsFromPersistentIdentifier:(id)arg1;
- (id)initWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct __CFDictionary {} *x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; boolx8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; int x13; int x14; struct __CFString {} *x15; int x16; id x17; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x18; struct _opaque_pthread_mutex_t { long x_19_1_1; BOOL x_19_1_2[40]; } x19; }*)arg1 entityType:(int)arg2 calendarUIDs:(id)arg3;
     /* Encoded args for previous method: @20@0:4^{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}BII^{__CFArray}^{__CFString}ii^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}}8i12@16 */

- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)persistentIdentifier;

@end
