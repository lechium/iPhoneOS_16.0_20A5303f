//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplicationExtensionActivity.h>

__attribute__((visibility("hidden")))
@interface _SFApplicationExtensionActivity : UIApplicationExtensionActivity
{
    CDUnknownBlockType _customCompletionHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000b9a3d
@property(copy, nonatomic) CDUnknownBlockType customCompletionHandler; // @synthesize customCompletionHandler=_customCompletionHandler;
- (_Bool)validateExtensionHasSameContainerAsHostApp:(id)arg1;	// IMP=0x00000000000b9886
- (void)activityDidFinish:(_Bool)arg1 items:(id)arg2 error:(id)arg3;	// IMP=0x00000000000b9667

@end
