//
//  EZCommonResultView.h
//  Easydict
//
//  Created by tisfeng on 2022/11/9.
//  Copyright © 2022 izual. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "EZQueryResult.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZWordResultView : NSView

@property (nonatomic, copy, readonly) NSString *copiedText;

@property (nonatomic, assign, readonly) CGFloat viewHeight;

@property (nonatomic, copy) void (^playAudioBlock)(EZWordPhonetic *wordPhonetic);
//@property (nonatomic, copy) void (^playAudioBlock)(NSString *word, EZLanguage language, NSString * _Nullable audioURL);

@property (nonatomic, copy) void (^copyTextBlock)(NSString *word);
@property (nonatomic, copy) void (^clickTextBlock)(NSString *word);

- (void)refreshWithResult:(EZQueryResult *)result;

@end

NS_ASSUME_NONNULL_END
