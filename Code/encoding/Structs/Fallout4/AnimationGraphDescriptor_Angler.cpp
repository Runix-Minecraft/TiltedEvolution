#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Fallout4/AnimationGraphDescriptor_Angler.h>

enum Variables
{
    kDirection = 0,
    kSpeed = 1,
    kSpeedSampled = 2,
    kfTimeStep = 3,
    kfHeadTwistGainAdj = 4,
    kfHeadTwistGain = 5,
    kHeadXTwist = 6,
    kHeadYTwist = 7,
    kHeadZTwist = 8,
    kbReactEnabled = 9,
    kfSpineTwistGainAdj = 10,
    kfSpineTwistGain = 11,
    kSpineXTwist = 12,
    kSpineYTwist = 13,
    kSpineZTwist = 14,
    kHitReactionTimer_Interp = 15, // underscore is space in game
    kbEnableFootIK = 16,
    km_worldFromModelFeedbackGain = 17,
    km_errorOutTranslation = 18,
    km_alignWithGroundRotation = 19,
    kbHeadTrackingEnabled = 20,
    kbGraphWantsHeadTracking = 21,
    kbSpineEnabled = 22,
    kbHeadTrackingDebug = 23,
    kLookAtOutOfRange = 24,
    kcamerafromx = 25,
    kcamerafromy = 26,
    kcamerafromz = 27,
    kbAnimationDriven = 28,
    kiGetUpType = 29,
    kiAttackState = 30,
    kIsAttackReady = 31,
    kbGraphWantsFootIK = 32,
    kbBlockMoveStop = 33,
    kbIsAttackStanding = 34,
    kbInCombat = 35,
    kweaponSpeedMult = 36,
    kiSyncTurnState = 37,
    kiSyncFootState = 38,
    kTurnDeltaSmoothed = 39,
    kiSyncIdleLocomotion = 40,
    kIsSprinting = 41,
    kiSyncSprintState = 42,
    kIsStaggering = 43,
    kbInJumpState = 44,
    kbGraphDriven = 45,
    kbManualGraphChange = 46,
    kcHitReactionBodyPart = 47,
    kiIsInSneak = 48,
    kblendFast = 49,
    kbAllowRotation = 50,
    kisAttacking = 51,
    kbIsSynced = 52,
    kbGraphDrivenRotation = 53,
    kbEquipOk = 54,
    kIsEquipping = 55,
    kbAllowHeadTracking = 56,
    kfRandomClipStartTimePercentage = 57,
    kLookAtChest_Enabled = 58,
    kLookAtSpine2_Enabled = 59,
    kbFreezeSpeedUpdate = 60,
    kbRenderFirstPersonInWorld = 61,
    kPose = 62,
    kbDisableSpineTracking = 63,
    kIsPlayer = 64,
    kbBlockPOVSwitch = 65,
    kbBlockPipboy = 66,
    kLookAtOutsideLimit = 67,
    kbForceIdleStop = 68,
    kbDoNotInterrupt = 69,
    kLookAtLimitAngleDeg = 70,
    kLookAtChest_LimitAngleDeg = 71,
    kLookAtNeck_LimitAngleDeg = 72,
    kLookAtHead_LimitAngleDeg = 73,
    kLookAtHead_OnGain = 74,
    kLookAtAdditive = 75,
    kbEnableRoot_IsActiveMod = 76,
    kIsNPC = 77,
    kLookAtOnGain = 78,
    kLookAtOffGain = 79,
    kbTalkableWithItem = 80,
    kiTalkGenerator = 81,
    kbFreezeRotationUpdate = 82,
    kiPcapTalkGenerator = 83,
    kSpeedSmoothed = 84,
    kbIsInFlavor = 85,
};

AnimationGraphDescriptor_Angler::AnimationGraphDescriptor_Angler(
    AnimationGraphDescriptorManager& aManager)
{
    uint64_t key = 766407925146866662;

    AnimationGraphDescriptorManager::Builder s_builder(aManager, key,
        AnimationGraphDescriptor(
            {
                kbAllowRotation,
                kbAnimationDriven,
                kLookAtOutOfRange,
                kbInCombat,
                kbGraphWantsHeadTracking,
                kIsEquipping,
                kisAttacking,
                kbIsAttackStanding,
            },
            {
                kSpeedSmoothed,
                kfTimeStep,
                kHitReactionTimer_Interp,
                kSpeedSampled,
                kSpineZTwist,
                kfSpineTwistGainAdj,
                kTurnDeltaSmoothed,
                kSpeed,
                kSpineYTwist,
                kfHeadTwistGainAdj,
                kDirection,
                kSpineXTwist,
            },
            {
                kiSyncIdleLocomotion,
                kiSyncTurnState,
                kcHitReactionBodyPart,
            }
        ));
}
