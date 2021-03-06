//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface LSBundleRecordUpdater
{
    struct LSContext _context;	// 16 = 0x10
    _Bool _hasContext;	// 24 = 0x18
    unsigned int _bundleID;	// 28 = 0x1c
    struct LSBundleData _bundleData;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x0000000000082227
- (void).cxx_destruct;	// IMP=0x0000000000082211
- (_Bool)checkNeedsUpdateForiTunesMetadata:(id)arg1 SINFo:(id)arg2 placeholderMetadata:(id)arg3;	// IMP=0x00000000000820ed
- (_Bool)updateBundleRecord:(id *)arg1;	// IMP=0x0000000000081fec
- (_Bool)parsePersonas:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008196c
- (void)parsePlaceholderMetadata:(id)arg1;	// IMP=0x00000000000818c2
- (void)parseSINFDictionary:(id)arg1;	// IMP=0x0000000000081797
- (void)parseiTunesMetadata:(id)arg1;	// IMP=0x0000000000080fbb
- (void)dealloc;	// IMP=0x0000000000080f27
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0000000000080f12
- (id)initWithBundleIdentifier:(id)arg1 preferPlaceholder:(_Bool)arg2;	// IMP=0x0000000000080c0b
- (id)initWithDatabase:(id)arg1 bundleUnit:(unsigned int)arg2 bundleData:(const struct LSBundleData *)arg3;	// IMP=0x0000000000080b40

@end

