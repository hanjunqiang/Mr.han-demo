//
//  GJGCSystemNotiDataManager.h
//  ZYChat
//
//  Created by ZYVincent on 14-11-11.
//  Copyright (c) 2014年 ZYProSoft. All rights reserved.
//

#import "GJGCChatDetailDataSourceManager.h"

/**
 *  等待接受状态
 */
typedef NS_ENUM(NSUInteger, GJGCChatSystemNotiAcceptState) {
    /**
     *  未操作
     */
    GJGCChatSystemNotiAcceptStatePrepare = 0,
    /**
     *  已通过
     */
    GJGCChatSystemNotiAcceptStateFinish = 1,
    /**
     *  已拒绝
     */
    GJGCChatSystemNotiAcceptStateReject = 2,
    /**
     *  其他管理员已同意
     */
    GJGCChatSystemNotiAcceptStateOtherAdminAccept = 3,
    /**
     *  其他管理员已拒绝
     */
    GJGCChatSystemNotiAcceptStateOtherAdminRject = 4,
    /**
     *  已过期
     */
    GJGCChatSystemNotiAcceptStateTimeOut = 5,
    /**
     *  群已经被解散
     */
    GJGCChatSystemNotiAcceptStateGroupHasBeenDelete = 6,
    /**
     *  你已被拉黑
     */
    GJGCChatSystemNotiAcceptStateYouHaveBePullBlack = 7,
    /**
     *  已经被你拉黑
     */
    GJGCChatSystemNotiAcceptStateHaveBePullBlackByYourself = 8,
    /**
     *  申请中
     */
    GJGCChatSystemNotiAcceptStateApplying = 9

};

@interface GJGCChatSystemNotiDataManager : GJGCChatDetailDataSourceManager

/**
 *  更新消息结果状态
 *
 *  @param state      状态值 0 未操作 1 通过 2 拒绝 3 其他管理员已接受 4 其他管理员已拒绝 5 申请已过期
 *  @param localMsgId 本地消息Id
 *
 *  @return <#return value description#>
 */
- (BOOL)updateAcceptState:(GJGCChatSystemNotiAcceptState)state localMsgId:(NSInteger)localMsgId;


@end
