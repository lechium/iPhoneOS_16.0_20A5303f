//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, _SFPBTextColumnSection;

@protocol _SFPBTextColumn <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *sections;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBTextColumnSection *)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)addSections:(_SFPBTextColumnSection *)arg1;
- (void)clearSections;
@end
