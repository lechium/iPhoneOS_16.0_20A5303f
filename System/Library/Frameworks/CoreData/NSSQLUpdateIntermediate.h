//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSQLUpdateColumnsIntermediate;

__attribute__((visibility("hidden")))
@interface NSSQLUpdateIntermediate
{
    NSSQLUpdateColumnsIntermediate *_updateColumns;	// 64 = 0x40
}

- (id)generateSQLStringInContext:(id)arg1;	// IMP=0x000000000020efbe
- (_Bool)isUpdateScoped;	// IMP=0x000000000020ef6d
- (void)dealloc;	// IMP=0x000000000020ef1f
- (id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3;	// IMP=0x000000000020eef0

@end
