
----------------------------------
local subP = "generalMovement"
----------------------------------
CDA({name = "idle1", 		sourceOffset = theAnimOffset, subPath = subP})

CDA({name = "idle1_sit", 		sourceOffset = theAnimOffset, subPath = subP})
CDA({name = "idle_naturalPose_L", 	sourceOffset = theAnimOffset, subPath = subP,		add = "idle1"})
CDA({name = "idle_naturalPose_R", 	sourceOffset = theAnimOffset, subPath = subP,		add = "idle1"})
CDA({name = "Head_LR",				sourceOffset = theAnimOffset, subPath = subP,		add = "idle1"})
CDA({name = "Head_UD",				sourceOffset = theAnimOffset, subPath = subP,		add = "idle1"})
CDA({name = "Head_Twist",			sourceOffset = theAnimOffset, subPath = subP,		add = "idle1"})
CDA({name = "Head_LR_simple",		sourceOffset = theAnimOffset, subPath = subP,		add = "idle1"})
CDA({name = "Head_UD_simple",		sourceOffset = theAnimOffset, subPath = subP,		add = "idle1"})
CDA({name = "Head_Twist_simple",	sourceOffset = theAnimOffset, subPath = subP,		add = "idle1"})
CDA({name = "Avatar_LR",			sourceOffset = theAnimOffset, subPath = subP,		add = "idle1"})
CDA({name = "Avatar_FB",			sourceOffset = theAnimOffset, subPath = subP,		add = "idle1"})
CDA({name = "Avatar_Twist",			sourceOffset = theAnimOffset, subPath = subP,		add = "idle1"})
CDA({name = "Avatar_LR_sit",			sourceOffset = theAnimOffset, subPath = subP,		add = "idle1"})
CDA({name = "Avatar_FB_sit",			sourceOffset = theAnimOffset, subPath = subP,		add = "idle1"})
CDA({name = "Avatar_Twist_sit",			sourceOffset = theAnimOffset, subPath = subP,		add = "idle1"})
CDA({name = "Head_LR_sit",				sourceOffset = theAnimOffset, subPath = subP,		add = "idle1"})
CDA({name = "Head_UD_sit",				sourceOffset = theAnimOffset, subPath = subP,		add = "idle1"})
CDA({name = "Head_Twist_sit",			sourceOffset = theAnimOffset, subPath = subP,		add = "idle1"})                       
----------------------------------
subP = "EyesAndEyebrows"
----------------------------------
CDA({name = "LeftEye_LR",				sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "LeftEye_UD",				sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "LeftEyebrow_Down",		source="LeftEyebrow_D",			sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "LeftEyebrow_Down_ext",	source="LeftEyebrow_D_ext",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "LeftEyebrow_Up",		source="LeftEyebrow_U",			sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "LeftEyebrow_Up_ext",	source="LeftEyebrow_U_ext",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "LeftEyeClosed",										sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "LeftEyeSquint",										sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "LeftEyeWideOpen",										sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})

CDA({name = "RightEye_LR",				sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "RightEye_UD",				sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "RightEyebrow_Down",		source="RightEyebrow_D", 		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "RightEyebrow_Down_ext",	source="RightEyebrow_D_ext",	sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "RightEyebrow_Up",			source="RightEyebrow_U",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "RightEyebrow_Up_ext",		source="RightEyebrow_U_ext",	sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "RightEyeClosed",											sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "RightEyeSquint",											sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "RightEyeWideOpen",											sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})

CDA({ name = "LeftEye_scale", 	sourceOffset = theAnimOffset, subPath = subP, add = "idle1" })
CDA({ name = "LeftEye_LR_scale", 	sourceOffset = theAnimOffset, subPath = subP, add = "idle1" })
CDA({ name = "LeftEye_UD_scale", 	sourceOffset = theAnimOffset, subPath = subP, add = "idle1" })
CDA({ name = "RightEye_scale", 	sourceOffset = theAnimOffset, subPath = subP, add = "idle1" })
CDA({ name = "RightEye_LR_scale", 	sourceOffset = theAnimOffset, subPath = subP, add = "idle1" })
CDA({ name = "RightEye_UD_scale", 	sourceOffset = theAnimOffset, subPath = subP, add = "idle1" })

----------------------------------
subP = "modifyProportions"
----------------------------------
CDA({name = "Modify_EarScale",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1", procentRef = 0.5})
CDA({name = "Modify_HeadSquash",	sourceOffset = theAnimOffset, subPath=subP,		add = "idle1", procentRef = 0.5})
CDA({name = "Modify_EyeScale",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1", procentRef = 0.5})
CDA({name = "Modify_mouthWidth",	sourceOffset = theAnimOffset, subPath=subP,		add = "idle1", procentRef = 0.5})
CDA({name = "Modify_noseScale",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1", procentRef = 0.5})

----------------------------------
subP = "MouthAndNose"
----------------------------------
CDA({name = "Mouth_unveilledTeethDown",		source="Mouth_unveilledTeeth_D",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "Mouth_unveilledTeethUp",		source="Mouth_unveilledTeeth_U",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "Mouth_unveilledTeethRightDown",	source="Mouth_unveilledTeethRight_D",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "Mouth_unveilledTeethLeftDown",		source="Mouth_unveilledTeethLeft_D",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "Mouth_unveilledTeethRightUp",		source="Mouth_unveilledTeethRight_U",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "Mouth_unveilledTeethLeftUp",		source="Mouth_unveilledTeethLeft_U",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})

CDA({name = "MouthJawBackFront",			source="MouthJaw_BF",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "MouthJawLeftRight",			source="MouthJaw_LR",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})

CDA({name = "MouthClosedCorner_spreadDown_L",		source="MouthClosedLeft_D",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "MouthClosedCorner_spreadDown_R",		source="MouthClosedRight_D",	sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "MouthClosedCorner_spreadUp_L",			source="MouthClosedLeft_U",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "MouthClosedCorner_spreadUp_R",			source="MouthClosedRight_U",	sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "MouthClosedCorner_spreadUp_visime_L",			source="MouthClosedLeft_visime_U",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "MouthClosedCorner_spreadUp_visime_R",			source="MouthClosedRight_visime_U",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})

CDA({name = "MouthOpen",												sourceOffset = theAnimOffset, subPath=subP,				add = "idle1"}) -- animation fro idle1 to mouth open (on all mouth bones)
CDA({name = "MouthOpen_base",											sourceOffset = theAnimOffset, subPath=subP}) -- single pose with mouth open (on all mouth bones)
CDA({name = "MouthOpenCornerUp_R",		source="MouthOpenRight_U",		sourceOffset = theAnimOffset, subPath=subP,				add = "MouthOpen_base"}) -- from mouth open to laugh
CDA({name = "MouthOpenCornerUp_L",		source="MouthOpenLeft_U",		sourceOffset = theAnimOffset, subPath=subP,				add = "MouthOpen_base"})
CDA({name = "MouthOpenCornerDown_R",	source="MouthOpenRight_D",		sourceOffset = theAnimOffset, subPath=subP,				add = "MouthOpen_base"})
CDA({name = "MouthOpenCornerDown_L",	source="MouthOpenLeft_D",		sourceOffset = theAnimOffset, subPath=subP,				add = "MouthOpen_base"})

CDA({name = "MouthOpen_forAO", 			source = "MouthOpen", 			subPath = "MouthAndNose"})

CDA({name = "Mouth_pursedLips_LR",				sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"})
CDA({name = "Mouth_pursedLips_puff",			sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"})
CDA({name = "MouthOpen_pursedLips_LR",			sourceOffset = theAnimOffset, subPath=subP,			add = "MouthOpen_base"})

CDA({name = "MouthTongueBase",			sourceOffset = theAnimOffset, subPath=subP}) -- poza cu gura intredeschisa pe care se additiveaza tongue out
CDA({name = "MouthTongueAdd",		source="MouthTongueBase",	sourceOffset = theAnimOffset, subPath=subP, add="idle1"}) -- poza cu gura intredeschisa pe care se additiveaza tongue out
CDA({name = "TongueIdle",				sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "TongueOut_LR", procentRef=1,				sourceOffset = theAnimOffset, subPath=subP,		add = "MouthTongueBase"})
CDA({name = "TongueOut_UD", procentRef=1,				sourceOffset = theAnimOffset, subPath=subP,		add = "MouthTongueBase"})


CDA({name = "NoseWrinker_Down",		source="NoseWrinker_D",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})
CDA({name = "NoseWrinker_Up",		source="NoseWrinker_U",		sourceOffset = theAnimOffset, subPath=subP,		add = "idle1"})


CDA({name = "CheekPuff_L",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1"})
CDA({name = "CheekPuff_R",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1"})
CDA({name = "CheekPuff_L_base",		source="CheekPuff_L", sourceOffset = theAnimOffset, subPath=subP})
CDA({name = "CheekPuff_R_base",		source="CheekPuff_R", sourceOffset = theAnimOffset, subPath=subP})

CDA({name = "MouthPoutyLip",		sourceOffset = theAnimOffset, subPath=subP,	add = "idle1"})

----------------------------------
subP = "visimes"
----------------------------------
CDA({name = "visime_new_AA",			sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"})
CDA({name = "visime_new_AH",			sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"})
CDA({name = "visime_new_AO",			sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"})
CDA({name = "visime_new_AW-OW",			sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"})
CDA({name = "visime_new_CH-J-SH",		sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"})
CDA({name = "visime_new_EH-AE",			sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"})
CDA({name = "visime_new_EY",			sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"})
CDA({name = "visime_new_FV",			sourceOffset = theAnimOffset, subPath=subP, 			add = "idle1"})
CDA({name = "visime_new_IH-AY",			sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"})
CDA({name = "visime_new_L",				sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"})
CDA({name = "visime_new_M-P-B",			sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"})
CDA({name = "visime_new_N-NG-DH",		sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"})
CDA({name = "visime_new_OY-UH-UW",		sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"})
CDA({name = "visime_new_R-ER",			sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"})
CDA({name = "visime_new_W",				sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"})
CDA({name = "visime_new_X",				sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"})
CDA({name = "visime_new_Y-IY",			sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"})

----------------------------------
subP = "SpecialAnims"
----------------------------------
CDA({name = "SpecialPose01",			sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"}) ---for mouth
CDA({name = "SpecialPose02",			sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"}) ---for LEye
CDA({name = "SpecialPose03",			sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"}) ---for REye
CDA({name = "SpecialPose04",			sourceOffset = theAnimOffset, subPath=subP,			add = "idle1"}) ---for Ears

CDA({name = "Special01",			sourceOffset = theAnimOffset, subPath=subP})  
CDA({name = "Special02",			sourceOffset = theAnimOffset, subPath=subP})  
CDA({name = "Special03",			sourceOffset = theAnimOffset, subPath=subP})  

----------------------------------
subP = "ShouldersAndHands"
----------------------------------
CDA({name = "HandR_closeUp_LR",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "HandR_closeMiddle_LR",		sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "HandR_closeDown_LR",		sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "HandR_farUp_LR",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "HandR_farMiddle_LR",		sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "HandR_farDown_LR",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "HandR_solo_Twist",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "HandR_solo_LR",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "HandR_solo_UD",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})

CDA({name = "HandL_closeUp_LR",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "HandL_closeMiddle_LR",		sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "HandL_closeDown_LR",		sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "HandL_farUp_LR",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "HandL_farMiddle_LR",		sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "HandL_farDown_LR",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "HandL_solo_Twist",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "HandL_solo_LR",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "HandL_solo_UD",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})

CDA({name = "FingerR0_extFlex",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "FingerR1_extFlex",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "FingerR2_extFlex",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "FingerR3_extFlex",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "FingerR4_extFlex",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})

CDA({name = "FingerL0_extFlex",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "FingerL1_extFlex",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "FingerL2_extFlex",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "FingerL3_extFlex",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})
CDA({name = "FingerL4_extFlex",			sourceOffset = theAnimOffset, subPath=subP,	add = "idle1", procentRef = 0.5})



CDA({name = "_frown", sourceOffset = theAnimOffset})
CDA({name = "_unsure", sourceOffset = theAnimOffset})
CDA({name = "_laugh", sourceOffset = theAnimOffset})
CDA({name = "_mouthOpen", sourceOffset = theAnimOffset})
CDA({name = "_pursedlips", sourceOffset = theAnimOffset})
CDA({name = "pursed", sourceOffset = theAnimOffset})
CDA({name = "_wonder", sourceOffset = theAnimOffset})
CDA({name = "_unveilTeeth", sourceOffset = theAnimOffset})
CDA({name = "_cheekPuff_base", sourceOffset = theAnimOffset})
CDA({name = "cheekL", sourceOffset = theAnimOffset})
CDA({name = "cheekR", sourceOffset = theAnimOffset})
CDA({name = "ShoulderCorrectiveAnim", sourceOffset = theAnimOffset})
CDA({name = "ShoulderCorrectiveAnim2", sourceOffset = theAnimOffset})
CDA({name = "special01", sourceOffset = theAnimOffset})
CDA({name = "special02", sourceOffset = theAnimOffset})
CDA({name = "special03", sourceOffset = theAnimOffset})
CDA({name = "special04", sourceOffset = theAnimOffset})
CDA({name = "special05", sourceOffset = theAnimOffset})
CDA({name = "special06", sourceOffset = theAnimOffset})
CDA({name = "neutralPose", sourceOffset = theAnimOffset})
----------------------------------

