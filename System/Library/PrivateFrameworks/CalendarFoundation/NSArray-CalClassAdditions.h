//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (CalClassAdditions)
+ (id)arrayOfSetsBySplitting:(id)arg1 batchSize:(unsigned long long)arg2;	// IMP=0x00500000000501d1
- (id)CalTake:(unsigned long long)arg1;	// IMP=0x0010000000051176
- (id)CalFlatMap:(CDUnknownBlockType)arg1;	// IMP=0x0010000000050fc5
- (id)CalMap:(CDUnknownBlockType)arg1;	// IMP=0x0010000000050d8f
- (id)CalFilter:(CDUnknownBlockType)arg1;	// IMP=0x0010000000050cb9
- (id)CalFirstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000050bea
- (id)filteredArrayUsingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000000a8f3
- (id)CalStringValueForKeys:(id)arg1 keyPaths:(id)arg2;	// IMP=0x0010000000050b29
- (id)CalStringValueForKeyPaths:(id)arg1;	// IMP=0x0010000000050aca
- (id)CalStringValueForKeys:(id)arg1;	// IMP=0x0010000000050a6b
- (id)_CalStringForArrayOfValues:(id)arg1;	// IMP=0x001000000005078e
- (id)_CalArrayOfValueForKeyPaths:(id)arg1;	// IMP=0x00100000000505cc
- (id)_CalArrayOfValueForKeys:(id)arg1;	// IMP=0x001000000005040a
- (id)CalMutableRecursiveCopy;	// IMP=0x001000000000b298
- (_Bool)CalContainsObjectIdenticalTo:(id)arg1;	// IMP=0x00100000000501ae
- (id)allObjectsWithClass:(Class)arg1;	// IMP=0x001000000000e3f5
@end

