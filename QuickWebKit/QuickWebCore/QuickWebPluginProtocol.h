//
//  QuickWebPluginProtocol.h
//  QuickWebKit
//
//  Created by pcjbird on 2017/12/23.
//  Copyright © 2017年 Zero Status. All rights reserved.
//

#ifndef QuickWebPluginProtocol_h
#define QuickWebPluginProtocol_h

@class QuickWebViewController;
/*
 * @brief 浏览器插件协议
 */
@protocol QuickWebPluginProtocol<NSObject>

/*
 * @brief 插件名称
 */
@property(nonatomic, strong) NSString* name;

@optional
/*
 * @brief webView创建完成
 * @param webViewController 浏览器控制器
 */
-(void)webViewControllerDidWebViewCreated:(QuickWebViewController*)webViewController;

/*
 * @brief 完成子视图布局
 * @param webViewController 浏览器控制器
 */
-(void)webViewControllerDidLayoutSubviews:(QuickWebViewController*)webViewController;

/*
 * @brief 开始加载
 * @param webViewController 浏览器控制器
 */
-(void)webViewControllerDidStartLoad:(QuickWebViewController*)webViewController;

/*
 * @brief 加载完成
 * @param webViewController 浏览器控制器
 */
-(void)webViewControllerDidFinishLoad:(QuickWebViewController*)webViewController;

/*
 * @brief 加载发生错误
 * @param webViewController 浏览器控制器
 * @param error 错误信息
 */
-(void)webViewController:(QuickWebViewController*)webViewController didFailLoadWithError:(NSError *)error;

@end


#endif /* QuickWebPluginProtocol_h */
