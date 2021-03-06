//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

@class NSArray, NSMutableArray, SKUIHeaderViewElement;

__attribute__((visibility("hidden")))
@interface SKUITracklistViewElement : SKUIViewElement
{
    NSMutableArray *_sections;	// 8 = 0x8
    NSMutableArray *_tracks;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002690a5
- (long long)pageComponentType;	// IMP=0x000000000026909a
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x0000000000268fe7
@property(readonly, nonatomic) NSArray *tracks;
@property(readonly, nonatomic) NSArray *sections;
@property(readonly, nonatomic) SKUIHeaderViewElement *header;
- (void)enumerateTracksUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000268aac

@end

