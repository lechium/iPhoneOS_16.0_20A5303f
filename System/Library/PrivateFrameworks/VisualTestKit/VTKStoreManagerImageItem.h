//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface VTKStoreManagerImageItem : NSObject
{
    NSData *_itemData;	// 8 = 0x8
    unsigned long long _itemType;	// 16 = 0x10
    NSString *_fileExtension;	// 24 = 0x18
    NSString *_fileSufix;	// 32 = 0x20
}

+ (id)itemWithImage:(id)arg1 itemType:(unsigned long long)arg2;	// IMP=0x00100000000028ac
- (void).cxx_destruct;	// IMP=0x0000000000002c38
@property(readonly, nonatomic) NSString *fileSufix; // @synthesize fileSufix=_fileSufix;
@property(readonly, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(readonly, nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) NSData *itemData; // @synthesize itemData=_itemData;
- (id)attachWithThestID:(id)arg1;	// IMP=0x0000000000002b25
- (id)fileNameWithTestID:(id)arg1;	// IMP=0x00000000000029da
- (id)initWithData:(id)arg1 itemType:(unsigned long long)arg2;	// IMP=0x0000000000002930

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
