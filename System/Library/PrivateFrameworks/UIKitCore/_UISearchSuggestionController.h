//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol _UISearchSuggestionControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UISearchSuggestionController : NSObject
{
    NSArray *_suggestions;	// 8 = 0x8
    id <_UISearchSuggestionControllerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000df3765
@property(nonatomic) __weak id <_UISearchSuggestionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
- (void)updateSuggestions:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x0000000000df3730

@end
