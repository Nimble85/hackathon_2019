CREATE DATABASE animals
GO

USE [animals]
GO

/****** Объект: Table [dbo].[pets] ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[pets] (
	[id]     					INT            IDENTITY (1, 1) NOT NULL,
   	[id_passport]		INT            NOT NULL,
	[status]				NVARCHAR (MAX) NULL,
	[birth_day] 			NVARCHAR (MAX) NULL,
   	[age]					INT		NULL,
    [vaccinations]  	NVARCHAR (MAX) NULL,
	[name]				NVARCHAR (MAX) NULL,
	[discribe]				NVARCHAR (MAX) NULL
);

SET IDENTITY_INSERT [dbo].[pets] ON
INSERT INTO [dbo].[pets] ([id], [id_passport], [status], [birth_day], [age],  [vaccinations] , [name], [discribe]) VALUES (1, 124793, N'host', N'12-01-19', 1,  N'yes', N'bonny', N'none')
INSERT INTO [dbo].[pets] ([id], [id_passport], [status], [birth_day], [age],  [vaccinations] , [name], [discribe]) VALUES (2, 564739, N'finding-host', N'05-02-19', 1, N'yes', N'sally', N'none')
INSERT INTO [dbo].[pets] ([id], [id_passport], [status], [birth_day], [age],  [vaccinations] , [name], [discribe]) VALUES (3, 847583, N'host-test', N'18-06-19', 1, N'yes', N'jim', N'none')
INSERT INTO [dbo].[pets] ([id], [id_passport], [status], [birth_day], [age],  [vaccinations] , [name], [discribe]) VALUES (4, 958473, N'finding-host', N'09-01-19', 1, N'yes', N'tom', N'none')
INSERT INTO [dbo].[pets] ([id], [id_passport], [status], [birth_day], [age],  [vaccinations] , [name], [discribe]) VALUES (5, 647328, N'host', N'04-05-19', 1, N'no', N'kenny', N'none')
INSERT INTO [dbo].[pets] ([id], [id_passport], [status], [birth_day], [age],  [vaccinations] , [name], [discribe]) VALUES (6, 292910, N'host-test', N'15-01-19',1, N'yes', N'genry', N'none')
INSERT INTO [dbo].[pets] ([id], [id_passport], [status], [birth_day], [age],  [vaccinations] , [name], [discribe]) VALUES (7, 783745, N'finding-host', N'22-01-19', 1, N'no', N'lisy', N'none')
INSERT INTO [dbo].[pets] ([id], [id_passport], [status], [birth_day], [age],  [vaccinations] , [name], [discribe]) VALUES (8, 838389, N'host-test', N'25-07-19',1, N'yes', N'jeck', N'none')
INSERT INTO [dbo].[pets] ([id], [id_passport], [status], [birth_day], [age],  [vaccinations] , [name], [discribe]) VALUES (9, 844837, N'host', N'30-01-19', 1, N'yes', N'keysy', N'none')
INSERT INTO [dbo].[pets] ([id], [id_passport], [status], [birth_day], [age],  [vaccinations] , [name], [discribe]) VALUES (10, 747384, N'host', N'14-06-19', 1, N'yes', N'bob', N'none')
SET IDENTITY_INSERT [dbo].[pets] OFF
