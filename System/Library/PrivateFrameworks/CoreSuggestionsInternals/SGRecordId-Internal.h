//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestions/SGRecordId.h>

@interface SGRecordId (Internal)
+ (id)recordIdForEventWithRowId:(long long)arg1;	// IMP=0x008000000014499b
+ (id)recordIdForContactDetailWithRowId:(long long)arg1;	// IMP=0x008000000014497d
+ (id)recordIdForContactWithRowId:(long long)arg1;	// IMP=0x008000000014495f
+ (id)recordIdForEmailWithRowId:(long long)arg1;	// IMP=0x008000000014493e
+ (id)recordIdWithTableId:(unsigned char)arg1 rowId:(long long)arg2;	// IMP=0x008000000014486b
- (long long)rowId;	// IMP=0x001000000014484b
- (unsigned char)tableId;	// IMP=0x0010000000144834
@end

