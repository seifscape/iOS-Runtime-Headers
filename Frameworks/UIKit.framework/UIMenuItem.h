/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIMenuItem : NSObject {
    SEL _action;
    BOOL _dontDismiss;
    NSString *_title;
}

@property SEL action;
@property BOOL dontDismiss;
@property(copy) NSString * title;

+ (id)menuItemWithTitle:(id)arg1 action:(SEL)arg2;

- (SEL)action;
- (void)dealloc;
- (BOOL)dontDismiss;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2;
- (void)setAction:(SEL)arg1;
- (void)setDontDismiss:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end