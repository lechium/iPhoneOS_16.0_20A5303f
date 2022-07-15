//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLAliasGenerator : NSObject
{
    unsigned int _nextTableAlias;	// 8 = 0x8
    unsigned int _nextVariableAlias;	// 12 = 0xc
    unsigned int _nextTempTableAlias;	// 16 = 0x10
    NSString *_tableBase;	// 24 = 0x18
    NSString *_variableBase;	// 32 = 0x20
}

- (id)generateSubqueryVariableAlias;	// IMP=0x000000000015909b
- (id)generateTableAlias;	// IMP=0x000000000015903c
- (void)dealloc;	// IMP=0x0000000000158ff2
- (id)initWithNestingLevel:(unsigned int)arg1;	// IMP=0x0000000000158f0a
- (id)init;	// IMP=0x0000000000158ef6

@end
