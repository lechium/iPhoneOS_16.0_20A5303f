//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSAKSerializer : NSObject
{
    id ss;	// 8 = 0x8
}

- (unsigned long long)serializePListValueIn:(id)arg1 key:(id)arg2 value:(id)arg3;	// IMP=0x000000000060235a
- (unsigned long long)serializePListKeyIn:(id)arg1 key:(id)arg2 value:(id)arg3;	// IMP=0x0000000000602345
- (unsigned long long)serializePropertyList:(id)arg1;	// IMP=0x00000000006020ed
- (unsigned long long)serializeListItemIn:(id)arg1 at:(unsigned long long)arg2;	// IMP=0x00000000006020b6
- (unsigned long long)serializeList:(id)arg1;	// IMP=0x0000000000601fa4
- (unsigned long long)serializeString:(id)arg1;	// IMP=0x0000000000601f15
- (unsigned long long)serializeData:(id)arg1;	// IMP=0x0000000000601ea0
- (unsigned long long)serializeObject:(id)arg1;	// IMP=0x0000000000601d78
- (id)serializerStream;	// IMP=0x0000000000601d6e
- (void)dealloc;	// IMP=0x0000000000601d10
- (id)initForSerializerStream:(id)arg1;	// IMP=0x0000000000601ca2

@end

