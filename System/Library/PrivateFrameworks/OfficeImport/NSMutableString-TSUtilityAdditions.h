//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableString.h>

@interface NSMutableString (TSUtilityAdditions)
- (void)tsu_appendSeparator:(id)arg1 format:(id)arg2;	// IMP=0x006000000024e9c8
- (void)tsu_insertCharacter:(unsigned short)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x006000000024e963
- (void)tsu_appendCharacter:(unsigned short)arg1;	// IMP=0x006000000024e944
- (void)tsu_indentBy:(unsigned long long)arg1;	// IMP=0x00600000002737d0
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2 escStr:(id)arg3 range:(struct _NSRange)arg4;	// IMP=0x00600000002e1119
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x00600000002e10eb
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2 escStr:(id)arg3;	// IMP=0x00600000002e102a
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2;	// IMP=0x00600000002e1014
- (_Bool)tc_replaceSubstr:(id)arg1 with:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x00600000002e0f17
- (_Bool)tc_replaceSubstr:(id)arg1 with:(id)arg2;	// IMP=0x00600000002e0e83
@end
