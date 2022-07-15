//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSSet;
@protocol VUIShelvesDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryShelvesDataSource
{
    NSSet *_shelfTypes;	// 8 = 0x8
    NSDictionary *_dataSourcesByShelfType;	// 16 = 0x10
    id <VUIShelvesDataSourceDelegate> _shelvesDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000118923
@property(nonatomic) __weak id <VUIShelvesDataSourceDelegate> shelvesDelegate; // @synthesize shelvesDelegate=_shelvesDelegate;
@property(retain, nonatomic) NSDictionary *dataSourcesByShelfType; // @synthesize dataSourcesByShelfType=_dataSourcesByShelfType;
@property(retain, nonatomic) NSSet *shelfTypes; // @synthesize shelfTypes=_shelfTypes;
- (id)initWithValidShelfTypes:(id)arg1;	// IMP=0x000000000011883e

@end
