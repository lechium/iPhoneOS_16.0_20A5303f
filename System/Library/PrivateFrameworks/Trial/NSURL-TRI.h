//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (TRI)
+ (id)triContainerURLWithPath:(id)arg1 containerId:(id)arg2 containerType:(long long)arg3;	// IMP=0x008000000002cdee
+ (id)triParseURLFromString:(id)arg1;	// IMP=0x008000000002c621
+ (id)triParseURLFromString:(id)arg1 isDirectory:(_Bool)arg2;	// IMP=0x008000000002c53c
- (id)triURLByResolvingSymlinksInPathIncludingPrivate;	// IMP=0x001000000002cefa
- (_Bool)triIsContainerURL;	// IMP=0x001000000002cd6b
- (id)triPathAsOwner:(_Bool)arg1;	// IMP=0x001000000002ca35
- (_Bool)triIsEqual:(id)arg1;	// IMP=0x001000000002c951
- (id)triSaveURLToString;	// IMP=0x001000000002c635
@end
