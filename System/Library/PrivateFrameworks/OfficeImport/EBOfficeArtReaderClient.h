//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBOfficeArtReaderClient : NSObject
{
}

+ (id)readDrawableFromPackagePart:(id)arg1 foundInObject:(id)arg2 state:(id)arg3;	// IMP=0x001000000039e092
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(id)arg2;	// IMP=0x001000000039e087
+ (_Bool)xmlEquivalentOfDrawableCanBeUsed;	// IMP=0x001000000039e07f
+ (_Bool)tablesAreAllowed;	// IMP=0x001000000018edb7
+ (_Bool)escherIsFullySupported;	// IMP=0x001000000013cfff
+ (void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;	// IMP=0x001000000039e079
+ (void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;	// IMP=0x001000000018edcb
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;	// IMP=0x0010000000142010
+ (void)readEshClientAnchor:(const void *)arg1 targetClientData:(id)arg2 state:(id)arg3;	// IMP=0x00100000001422d9
+ (void)setAutoInsetForShape:(void *)arg1;	// IMP=0x00100000001468d6

@end
