//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (IC)
+ (id)ic_loggingDescriptionFromLoggable:(id)arg1 isPretty:(_Bool)arg2;	// IMP=0x008000000001db66
- (_Bool)ic_shouldIgnoreObserveValue:(id)arg1 ofObject:(id)arg2 forKeyPath:(id)arg3;	// IMP=0x001000000000f4ae
- (void)ic_removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;	// IMP=0x001000000000f434
- (_Bool)ic_didAddObserverForContext:(void *)arg1 inScope:(char *)arg2;	// IMP=0x001000000000f392
- (void)ic_addObserver:(id)arg1 forKeyPath:(id)arg2 context:(CDStruct_91a0c811 *)arg3 explicitOptions:(unsigned long long)arg4;	// IMP=0x001000000000f377
- (void)ic_addObserver:(id)arg1 forKeyPath:(id)arg2 context:(CDStruct_91a0c811 *)arg3;	// IMP=0x001000000000f35f
- (id)ic_loggingIdentifier;	// IMP=0x001000000001db41
- (id)ic_prettyLoggingDescription;	// IMP=0x001000000001dad0
- (id)ic_loggingDescription;	// IMP=0x001000000001da62
@end
