//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface MapsUIDiffableDataSourceIdentifierCache : NSObject
{
    NSMapTable *_previousGeneration;	// 8 = 0x8
    NSMapTable *_currentGeneration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000b19227
- (void)markGeneration;	// IMP=0x0010000000b191f9
- (id)identifierForObject:(id)arg1;	// IMP=0x0010000000b19103
- (id)_currentGeneration;	// IMP=0x0010000000b190b8

@end

