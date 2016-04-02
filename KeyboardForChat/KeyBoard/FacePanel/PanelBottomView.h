//
//  PanelBottomView.h
//  FaceKeyboard

//  Company：     SunEee
//  Blog:        devcai.com
//  Communicate: 2581502433@qq.com

//  Created by ruofei on 16/3/31.
//  Copyright © 2016年 ruofei. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^ADDACTIONBLOCK)();
typedef void (^SETACTIONBLOCK)();

@class PanelBottomView;

@protocol PanelBottomViewDelegate <NSObject>

@optional
- (void)panelBottomView:(PanelBottomView*)panelBottomView didPickerFaceSubjectIndex:(NSInteger)faceSubjectIndex;

- (void)panelBottomViewSendAction:(PanelBottomView*)panelBottomView;

@end

@interface PanelBottomView : UIView

@property (nonatomic, weak) id<PanelBottomViewDelegate> delegate;

@property (nonatomic, copy) ADDACTIONBLOCK addAction;
@property (nonatomic, copy) SETACTIONBLOCK setAction;

- (void)loadfaceSubjectPickerSource:(NSArray *)pickerSource;
- (void)changeFaceSubjectIndex:(NSInteger)subjectIndex;

@end
