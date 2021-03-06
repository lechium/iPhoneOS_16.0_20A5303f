//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionSection : NSObject
{
    NSArray *_actions;	// 8 = 0x8
    NSString *_sectionID;	// 16 = 0x10
}

+ (id)actionsFromSections:(id)arg1;	// IMP=0x00100000000435bf
- (void).cxx_destruct;	// IMP=0x0000000000043b0e
@property(readonly, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (id)copyOfActions;	// IMP=0x0000000000043926
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000438c9
- (id)description;	// IMP=0x0000000000043843
- (id)initWithActions:(id)arg1;	// IMP=0x000000000004377a

@end

