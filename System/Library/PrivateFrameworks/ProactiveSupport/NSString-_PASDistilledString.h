//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (_PASDistilledString)
+ (id)_pas_distilledStringClasses;	// IMP=0x0010000000034cfd
+ (id)_pas_proxyStringByConcatenatingStrings:(id)arg1;	// IMP=0x0010000000038448
+ (id)_pas_stringWithDataNoCopy:(id)arg1 encoding:(unsigned long long)arg2 nullTerminated:(_Bool)arg3;	// IMP=0x001000000003842c
+ (id)_pas_stringWithDataNoCopy:(id)arg1 encoding:(unsigned long long)arg2 nullTerminated:(_Bool)arg3 isExternalRepresentation:(_Bool)arg4;	// IMP=0x0010000000038406
- (id)_pas_revivedString;	// IMP=0x0010000000034c00
- (id)_pas_distilledString;	// IMP=0x0010000000034806
- (const char *)_pas_fastUTF8StringPtrWithOptions:(unsigned long long)arg1 encodedLength:(unsigned long long *)arg2;	// IMP=0x0010000000037cc5
- (_Bool)_pas_retainsConmingledBackingStore;	// IMP=0x0010000000037c83
- (void)_pas_setRetainsConmingledBackingStore:(_Bool)arg1;	// IMP=0x0010000000037c3c
- (id)_pas_stringBackedByUTF8CString;	// IMP=0x0010000000037a28
- (id)_pas_proxyArrayOfSubstringsWithRanges:(id)arg1;	// IMP=0x0010000000037913

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
